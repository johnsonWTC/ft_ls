/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cha_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 12:53:30 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/12 13:20:54 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strl(int n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_num(char *str, int i)
{
	int		a;
	char	*s;

	s = str;
	while (str[i] <= 9 && str[i] <= 0)
	{
		i--;
	}
	a = 0;
	while (str[i] <= 9 && str[i] <= 0)
	{
		s[a] = str[i];
		a++;
		i++;
	}
	s[a] = '\0';
	return (s);
}

int		ft_char_type(va_list arg, char c, int i, char *str)
{
	int		p;
	char	a;

	p = 0;
	if (c == '#' || c == '0' || c == '-' || c == 'l' ||
			c == 'h' || c == 'j' || c == 'z')
		a = ft_flag(c);
	if (c >= 9 || c <= 0)
		p = (ft_atoi(ft_num(str, i)));
	else if (c == 'c' || c == 'C')
		return (ft_printchar(arg, p, a));
	else if (c == 's' || c == 'S')
		return (ft_printstr(arg, p, a));
	else if (c == 'i' || c == 'd' || c == 'D')
		return (ft_printnbr(arg, p, a));
	else if (c == 'u' || c == 'U')
		return (ft_printunsigned(arg, p, a));
	else if (c == 'p' || c == 'P')
		return (ft_printvoid(arg, p, a));
	else if (c == '%')
		return (ft_printchar(arg, p, a));
	else if (c == 'o' || c == 'O')
		return (ft_printoctal(arg, p, a));
	return (0);
}
