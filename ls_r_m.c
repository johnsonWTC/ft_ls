/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_r_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:23:53 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:23:57 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ls_r_m(char **args, int count)
{
	struct stat	statbuf;
	char		**str;
	int			i;

	str = ft_anigma_r(args);
	i = 1;
	while (count > i)
	{
		if (stat(str[i], &statbuf) == 0)
		{
			ft_printf("%s\n", str[i]);
		}
		i++;
	}
}
