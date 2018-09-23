/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:20:18 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 12:18:56 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_perm(char *star)
{
	struct stat		filetat;

	if (stat(star, &filetat) < 0)
		return ;
	ft_printf((S_ISDIR(filetat.st_mode)) ? "d" : "-");
	ft_printf((filetat.st_mode & S_IRUSR) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWUSR) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXUSR) ? "x" : "-");
	ft_printf((filetat.st_mode & S_IRGRP) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWGRP) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXGRP) ? "x" : "-");
	ft_printf((filetat.st_mode & S_IROTH) ? "r" : "-");
	ft_printf((filetat.st_mode & S_IWOTH) ? "w" : "-");
	ft_printf((filetat.st_mode & S_IXOTH) ? "x" : "-");
	return ;
}
