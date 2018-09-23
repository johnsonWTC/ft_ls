/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:48:39 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/12 13:01:04 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_flagh(char c, va_list arg)
{
	if (c == 'hh')
		return (ft_flag_type_hh(c, arg));
	else if (c == 'j')
		return (ft_flag_type_j(c, arg));
	else if (c == 'z')
		return (ft_flag_type_z(c, arg));
	else if (c == 'l')
		return (ft_flag_type_j(c, arg));
}

char	*flags(int hashtag, int zero, int minus)
{
	char	*str;
	int		i;

	if (c == 'l' || c == 'h' || c == 'j' || c == 'z')
		b = ft_flagh(c, arg);
	i = 0;
	str = (char *)malloc((char)sizeof(char));
	if (!str)
		exit(0);
	if (hashtag >= 1)
		str[i++] = '#';
	if (zero >= 1)
		str[i++] = '0';
	if (minus >= 1)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}
