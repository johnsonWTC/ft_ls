/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:53:10 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:08:03 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*prev;
	t_list	*begin;

	if (!(new = ft_lstnew((f(lst))->content, (f(lst))->content_size)))
		return (NULL);
	new = f(lst);
	lst = lst->next;
	prev = new;
	begin = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(f((lst))->content, f((lst))->content_size)))
			return (NULL);
		new = f(lst);
		prev->next = new;
		if (!begin)
			begin = prev;
		prev = new;
		lst = lst->next;
	}
	new->next = NULL;
	return (begin);
}
