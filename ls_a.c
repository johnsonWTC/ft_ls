/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:21:45 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:21:49 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static	int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			ls_a(void)
{
	struct stat		statbuf;
	struct passwd	*pwd;
	struct dirent	**sd;
	int				n;
	int				i;

	pwd = getpwuid((geteuid()));
	n = scandir(".", &sd, one, alphasort);
	i = 1;
	while (i < n)
	{
		if (stat(sd[i]->d_name, &statbuf) == 0)
		{
			ft_printf("%s\n", sd[i]->d_name);
		}
		free(sd[i]);
		i++;
	}
	free(sd);
}
