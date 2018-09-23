/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_wchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:23:37 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:23:46 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strncpy_wchar(wchar_t *dst, const wchar_t *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
