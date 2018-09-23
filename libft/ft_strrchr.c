/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:24:20 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:24:26 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int nb;

	i = 0;
	nb = -1;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			nb = i;
		i++;
	}
	if (str[i] == (unsigned char)c)
		nb = i;
	if (nb != -1)
		return ((char *)(str + nb));
	else
		return (NULL);
}
