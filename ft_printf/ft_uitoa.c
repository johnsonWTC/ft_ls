/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:55:57 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 16:36:13 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strl(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_uitoa(unsigned int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	number;

	number = n;
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = number % 10 + '0';
	while (number /= 10)
		str[--str_len] = number % 10 + '0';
	return (str);
}
