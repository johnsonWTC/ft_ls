/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:09:15 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 16:45:43 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printoctal(va_list arg, int a, char flag)
{
	char			*p;
	unsigned int	c;
	int				dif;

	c = va_arg(ap, unsigned int);
	p = ft_otoa(c);
	if (ft_strlen(p) > a)
		diff = ft_strlen(p) - a;
	while (diff > 0)
		putchar(' ');
	ft_putstr(p, flag);
	return (ft_strlen(p));
}
