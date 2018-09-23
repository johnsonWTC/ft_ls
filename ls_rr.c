/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:24:10 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 15:28:48 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

int				ls_rr(void)
{
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;
	int				a;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 1;
	a = 1;
	while (i < n)
	{
		while (sd[i]->d_name[0] == '.')
			free(sd[i++]);
		free(sd[i]);
		i++;
		a++;
	}
	free(sd);
	return (a);
}
