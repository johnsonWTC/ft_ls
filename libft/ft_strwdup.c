/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:26:03 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:26:16 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_strdup_wchar(const char *str)
{
	int		i;
	wchar_t	*cpy;

	i = 0;
	if (!str)
		return (ft_strdup_wchar("(null)"));
	cpy = (wchar_t *)malloc((ft_strlen(str) + 1) * sizeof(wchar_t));
	if (!cpy)
		exit(0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

wchar_t	*ft_strdup_wchar_to_wchar(wchar_t *str)
{
	int		i;
	wchar_t	*cpy;

	i = 0;
	if (!str)
		return (ft_strdup_wchar("(null)"));
	cpy = (wchar_t *)malloc((ft_strlen_null(str, 0) + 1) * sizeof(wchar_t));
	if (!cpy)
		exit(0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
