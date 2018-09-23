/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:24:45 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:24:51 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i1])
	{
		while (s1[i1 + i2] == s2[i2] && s2[i2] && s1[i1 + i2])
			i2++;
		if (!s2[i2])
			return ((char *)s1 + i1);
		i2 = 0;
		i1++;
	}
	return (NULL);
}
