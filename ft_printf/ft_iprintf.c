/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:17:15 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/11 16:51:23 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char const *str, ...)
{
	int			i;
	va_list		arg;
	int			b;
	int			ret;

	va_start(arg, str);
	i = 0;
	b = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}
		b++;
		i++;
		ret = ft_char_type(arg, str[i], i, (char *)str) + ret;
		if (str[i + 1] == '\0')
			break ;
		i++;
	}
	ret = ret + (ft_strlen(str) - (b * 2)) - 1;
	va_end(arg);
	return (ret);
}
