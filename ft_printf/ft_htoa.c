/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:02:23 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 17:14:48 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hexavalue(int x)
{
	if (0 <= x && x <= 9)
		return (48 + x);
	else if (10 <= x && x <= 15)
	{
		x = x - 10;
		return (97 + x);
	}
	return (0);
}

char	*ft_htoa(unsigned long n)
{
	char			*p;
	int				size;
	unsigned long	x;

	x = n;
	size = 0;
	while (x > 16)
	{
		x = x / 16;
		size++;
	}
	p = (char *)malloc(sizeof(p) * (size + 1));
	if (p)
	{
		p[size + 1] = '\0';
		while (size >= 0)
		{
			x = n % 16;
			p[size] = hexavalue(x);
			n = n / 16;
			size--;
		}
	}
	return (p);
}
