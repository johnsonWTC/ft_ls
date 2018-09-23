/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:45:53 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 17:27:08 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printnbr(va_list arg, int a, char flag)
{
	int		i;
	char	*p;
	int		dif;

	i = va_arg(arg, int);
	p = ft_itoa(i);
	if (ft_strlen(p) > a)
		diff = ft_strlen(p) - a;
	while (diff > 0)
		putchar(' ');
	ft_putstr(p, flag);
	return (ft_strlen(p));
}
