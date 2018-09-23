/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:51:03 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 12:51:07 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*number_assign(char *str, int n, int i, int j)
{
	while (i > j)
	{
		str[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	j = -1;
	str = malloc((ft_int_size(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str = ft_strcpy(str, "-2147483648");
		return (str);
	}
	i = ft_int_size(n);
	if (n < 0)
	{
		j++;
		n = -n;
		str[j] = '-';
	}
	str[i] = '\0';
	i--;
	str = number_assign(str, n, i, j);
	return (str);
}
