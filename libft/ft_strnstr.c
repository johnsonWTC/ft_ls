/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:24:13 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:24:19 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i1] && i1 < n)
	{
		while (s1[i1 + i2] == s2[i2] && s2[i2] && s1[i1 + i2] && (i1 + i2) < n)
			i2++;
		if (!s2[i2])
			return ((char *)s1 + i1);
		i1++;
		i2 = 0;
	}
	return (NULL);
}
