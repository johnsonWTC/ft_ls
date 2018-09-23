/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 18:42:04 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 18:04:31 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		main_malti(int argc, char **argv)
{
	if (ft_strcmp(argv[1], "-l") == 0)
		multi_args_l(argv, argc);
	else if (ft_strcmp(argv[1], "-r") == 0)
		ls_r_m(argv, argc);
	else if (ft_strcmp(argv[1], "-a") == 0)
		ls_a_m(argv, argc);
	else
		ft_printf("usage: ls [-ABCFGHLOPRSTUWabcdefgh\
				iklmnopqrstuwx1] [file ...]");
}

int			main(int argc, char **argv)
{
	if (argc > 2)
		main_malti(argc, argv);
	else if (argc == 1)
		ls();
	else if (ft_strcmp(argv[1], "-l") == 0)
		ls_l();
	else if (ft_strcmp(argv[1], "-r") == 0)
		ls_r();
	else if ((ft_strcmp(argv[1], "-a") == 0) || (ft_strcmp(argv[1], "-f") == 0))
		ls_a();
	else if (ft_strcmp(argv[1], "-g") == 0)
		ls_g();
	else
		ft_printf("usage: ls [-ABCFGHLOPRSTUWabc\
				defghiklmnopqrstuwx1] [file ...]");
}
