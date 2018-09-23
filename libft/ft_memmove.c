/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:10:52 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:12:53 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *cpy;

	cpy = malloc(len * sizeof(char));
	ft_memcpy(cpy, src, len);
	ft_memcpy(dst, cpy, len);
	free(cpy);
	return (dst);
}
