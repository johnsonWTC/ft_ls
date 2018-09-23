/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:17:00 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 17:28:12 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printchar(va_list arg, char flag)
{
	int		i;

	i = va_arg(arg, int);
	ft_putchar(i, flag);
	return (1);
}
