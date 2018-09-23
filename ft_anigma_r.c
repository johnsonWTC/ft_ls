/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anigma_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:19:12 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/30 11:19:18 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	**ft_anigma_r(char **str)
{
	char	*temp;
	int		i;

	i = 1;
	while (str[i + 1] != NULL)
	{
		if (str[i + 1][0] > str[i][0])
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	return (str);
}
