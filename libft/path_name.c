/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_name.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 10:29:26 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 10:29:30 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

char	*file_name(char *str, char *path)
{
	int		i;
	int		g;
	char	*cpy;

	i = 0;
	g = 0;
	while (str[i] == path[i])
		++i;
	cpy = malloc(ft_strlen(str) * sizeof(char));
	while (str[i])
	{
		cpy[g] = str[i];
		++i;
		++g;
	}
	cpy[g] = '\0';
	return (cpy);
}

char	*path_name(char *str)
{
	int		i;
	int		count;
	char	*cpy;
	int		new_count;

	new_count = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '/')
			++count;
		++i;
	}
	i = 0;
	cpy = malloc(ft_strlen(str) * sizeof(char));
	while (str[i] && count != new_count)
	{
		if (str[i] == '/')
			++new_count;
		cpy[i] = str[i];
		++i;
	}
	cpy[i] = '\0';
	return (cpy);
}
