/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:56:51 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/10 11:56:55 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!cpy)
		exit(0);
	if (!cpy)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
