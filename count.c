/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:18:39 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:52:23 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		count(void)
{
	DIR				*dir;
	struct dirent	*sd;
	int				i;

	dir = opendir(".");
	if (!dir)
	{
		ft_printf("error");
		exit(1);
	}
	i = 0;
	while ((sd = readdir(dir)))
	{
		i++;
	}
	return (i);
}
