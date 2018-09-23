/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:18:00 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/12 10:31:09 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printstr(va_list arg, int a, char flag)
{
	char	*p;
	int		diff;

	i = va_arg(arg, char *);
	if (ft_strlen(p) > a)
		diff = ft_strlen(p) - a;
	while (diff > 0)
		putchar(' ');
	ft_putstr(i, flag);
	return (ft_strlen(i));
}
