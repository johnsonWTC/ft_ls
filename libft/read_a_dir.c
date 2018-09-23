/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_a_dir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:29:38 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 10:30:12 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

static int		check_three(t_command *c_lst)
{
	int i;

	i = 0;
	i = check(c_lst, 'l') + check(c_lst, 'o')\
	+ check(c_lst, 'g');
	return (i);
}

void			aff_name(t_directory *dir, char *path, int l)
{
	struct stat tmp;
	ssize_t		r;
	char		*linkname;

	lstat(path, &tmp);
	if (S_ISLNK(tmp.st_mode) == 1)
	{
		ft_printf("%s", dir->d_name);
		linkname = malloc(tmp.st_size + 1);
		r = readlink(path, linkname, tmp.st_size + 1);
		linkname[r] = '\0';
		ft_printf(" -> %s\n", linkname);
		free(linkname);
	}
	else
		ft_printf("%s\n", dir->d_name);
}

int				read_a_dir_lol(t_directory *dir,\
				t_command *c_lst, char *path)
{
	int		i;
	int		g;
	int		block_max;
	char	*new_name;

	block_max = 0;
	i = max_size_check(dir, path, c_lst, &block_max);
	g = max_link_check(dir, path);
	while (dir)
	{
		if (can_we_open(dir->d_name, c_lst) == 1)
		{
			new_name = add_name(path, dir->d_name);
			other_command(new_name, c_lst, block_max);
			if ((check_three(c_lst)) > 0)
				aff_rights(new_name, i, c_lst, g);
			if (check(c_lst, 'c') == 1)
				color(dir, new_name, check(c_lst, 'l'));
			else
				aff_name(dir, new_name, check(c_lst, 'l'));
			free(new_name);
		}
		dir = dir->next;
	}
	return (1);
}
