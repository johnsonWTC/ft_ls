/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:23:34 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 15:27:27 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int		one(const struct dirent *unused)
{
	(void)unused;
	return (1);
}

void			ls_r(void)
{
	struct stat		statbuf;
	struct dirent	**sd;
	int				n;
	int				a;
	int				t;

	a = ls_rr();
	n = scandir(".", &sd, one, alphasort);
	t = n - a;
	while (n > t)
	{
		if (stat(sd[n]->d_name, &statbuf) == 0)
		{
			ft_printf("%s\n", sd[n]->d_name);
		}
		n--;
	}
	free(sd);
}
