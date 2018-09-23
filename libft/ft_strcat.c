/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:17:22 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:17:29 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int i;
	int count;

	i = 0;
	count = ft_strlen(str1);
	while (str2[i])
	{
		str1[count + i] = str2[i];
		i++;
	}
	str1[count + i] = '\0';
	return (str1);
}
