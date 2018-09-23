/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:38:57 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 14:39:08 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		reverse(wchar_t **str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = (ft_strlen_null(*str, 0) - 1);
	if ((*str)[i] == '-')
		i++;
	while (j > i)
	{
		c = (*str)[j];
		(*str)[j] = (*str)[i];
		(*str)[i] = c;
		i++;
		j--;
	}
}
