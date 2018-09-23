/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:09:32 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:09:59 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
	{
		i++;
	}
	if (i == n)
		return (((unsigned char *)s1)[n - 1] - ((unsigned char *)s2)[n - 1]);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
