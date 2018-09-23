/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:25:42 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 10:25:50 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	reverse_sort(t_directory **begin)
{
	t_directory *cpy;
	t_directory *next;
	t_directory *bfr;

	bfr = *begin;
	cpy = bfr->next;
	bfr->next = NULL;
	while (cpy)
	{
		next = cpy->next;
		cpy->next = bfr;
		bfr = cpy;
		cpy = next;
	}
	*begin = bfr;
}

int		check(t_command *list, char c)
{
	while (list)
	{
		if (list->letter == c)
			return (1);
		list = list->next;
	}
	return (0);
}
