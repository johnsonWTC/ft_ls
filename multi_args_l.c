/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_args_l.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:24:51 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:24:53 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	multi_args_l(char **arg, int count)
{
	struct stat		statbuf;
	struct group	*grp;
	struct passwd	*pwd;
	int				i;

	pwd = getpwuid((geteuid()));
	i = 2;
	while (count > i)
	{
        stat(arg[i], &statbuf);
        ft_perm(arg[i]);
        ft_printf(" %-2d %4s  ", statbuf.st_nlink, pwd->pw_name);
        if ((grp = getgrgid(statbuf.st_gid)) != NULL)
            ft_printf(" %-8.8s %5d %s %s\n",grp->gr_name,
                      (int)statbuf.st_size,ft_group(ctime(&statbuf.st_mtime)),
                      arg[i]);
        else
            ft_printf(" %-8d %5d %s %s\n", statbuf.st_gid,
                      (int)statbuf.st_size,ft_group(ctime(&statbuf.st_mtime)),
                      arg[i]);
        i++;
	}
}
