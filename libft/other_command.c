/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:28:48 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 10:29:02 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

void	other_command(char *str, t_command *c_lst, int block_max)
{
	struct stat tmp;
	long		i;

	lstat(str, &tmp);
	if (check(c_lst, 'i') == 1)
		ft_printf("%llu ", tmp.st_ino);
	if (check(c_lst, 's') == 1)
	{
		i = tmp.st_blocks / 2;
		aff_size(i, block_max);
	}
}

int		can_we_open(char *str, t_command *c_lst)
{
	if (str[0] != '.')
		return (1);
	if (str[0] == '.' && check(c_lst, 'a') == 1)
		return (1);
	if (ft_strcmp(".", str) != 0 && ft_strcmp("..", str) != 0\
		&& check(c_lst, 'A') == 1)
		return (1);
	return (0);
}
