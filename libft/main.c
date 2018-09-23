/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:28:34 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 10:28:38 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

int		read_a_dir(DIR *file)
{
	struct dirent *tmp;

	tmp = readdir(file);
	while (tmp)
	{
		if (tmp->d_name[0] != '.')
			ft_printf("%s\n", tmp->d_name);
		tmp = readdir(file);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	DIR *tmp;

	i = 1;
	to_parsing(argv);
	return (1);
}
