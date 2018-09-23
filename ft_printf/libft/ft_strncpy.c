/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:57:29 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/10 11:57:31 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
