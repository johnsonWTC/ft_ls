/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 09:50:24 by jdubula           #+#    #+#             */
/*   Updated: 2018/06/11 09:54:42 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == 0)
		return (NULL);
	while (size != 0)
	{
		s[size] = '\0';
		size--;
	}
	s[size] = '\0';
	return (s);
}
