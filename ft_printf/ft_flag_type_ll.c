/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_type_ll.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:59:33 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/12 12:59:37 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flag_type_ll(va_list arg, char c, int i, char *str)
{
	int		p;
	char	a;

	a = 0;
	if (c == 'c' || c == 'C')
		return (ft_printchar((char *)arg, p, a));
	else if (c == 's' || c == 'S')
		return (ft_printstr((char *)arg, p, a));
	else if (c == 'i' || c == 'd' || c == 'D')
		return (ft_printnbr((char *)arg, p, a));
	else if (c == 'u' || c == 'U')
		return (ft_printunsigned((char *)arg, p, a));
	else if (c == 'p' || c == 'P')
		return (ft_printvoid((char *)arg, p, a));
	else if (c == '%')
		return (ft_printchar((char *)arg, p, a));
	else if (c == 'o' || c == 'O')
		return (ft_printoctal((char *)arg, p, a));
	return (0);
}
