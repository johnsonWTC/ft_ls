/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:22:48 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:22:57 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t count;

	count = ft_strlen(str1);
	i = 0;
	while ((i + 1) <= n)
	{
		str1[count + i] = str2[i];
		i++;
	}
	str1[count + i] = '\0';
	return (str1);
}
