/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:58:55 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/05 16:59:25 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printunsigned(va_list arg, int a, char flag)
{
	char			*p;
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	p = ft_uitoa(c);
	ft_putstr(p, flag);
	return (ft_strlen(p));
}
