/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evilsbol <evilsbol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 19:49:52 by evilsbol          #+#    #+#             */
/*   Updated: 2018/08/11 16:38:33 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printvoid(va_list arg, int a, char flag)
{
	char			*p;
	unsigned long	c;

	ft_putstr("0x");
	c = va_arg(ap, unsigned long);
	p = ft_htoa(c);
	ft_putstr(p, flag);
	return (ft_strlen(p) + 2);
}
