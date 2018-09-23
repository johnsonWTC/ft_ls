/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:52:14 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 12:52:48 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		**new;
	t_list		**test;

	if (!alst)
		return ;
	new = alst;
	while (*new)
	{
		test = new;
		del((*new)->content, (*new)->content_size);
		free(*test);
		*new = (*new)->next;
	}
	ft_memdel((void **)alst);
}
