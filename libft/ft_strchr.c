/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:19:00 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:19:07 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != (unsigned char)c)
		i++;
	if (!str[i] && str[i] != (unsigned char)c)
		return (NULL);
	else
		return ((char *)(str + i));
}
