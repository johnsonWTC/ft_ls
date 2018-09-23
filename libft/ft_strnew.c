/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:24:05 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:24:12 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, (size + 1));
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
