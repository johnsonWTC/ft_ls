/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_type_j.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:58:11 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/12 12:58:33 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flag_type_j(va_list arg, char c, int i, char *str)
{
	int		p;
	char	a;

	a = 0;
	if (c == 'c' || c == 'C')
		return (ft_printchar((intmax_t)arg, p, a));
	else if (c == 's' || c == 'S')
		return (ft_printstr((intmax_t)arg, p, a));
	else if (c == 'i' || c == 'd' || c == 'D')
		return (ft_printnbr((intmax_t)arg, p, a));
	else if (c == 'u' || c == 'U')
		return (ft_printunsigned((intmax_t)arg, p, a));
	else if (c == 'p' || c == 'P')
		return (ft_printvoid((intmax_t)arg, p, a));
	else if (c == '%')
		return (ft_printchar((intmax_t)arg, p, a));
	else if (c == 'o' || c == 'O')
		return (ft_printoctal((intmax_t)arg, p, a));
	return (0);
}
