/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_a_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:22:03 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:22:07 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ls_a_m(char **args, int count)
{
	struct stat	statbuf;
	char		**str;
	int			i;

	str = ft_anigma(args);
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
