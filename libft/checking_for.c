/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_for.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:19:04 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 12:19:46 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		checking_for_hashtag(char *flags)
{
	int i;

	i = 0;
	while (flags[i] && flags[i] != '#')
		i++;
	if (flags[i] == '#')
		return (1);
	return (0);
}

int		checking_for_space(char *flags)
{
	int i;

	i = 0;
	while (flags[i] && flags[i] != ' ')
		i++;
	if (flags[i] == ' ')
		return (1);
	return (0);
}

int		checking_for_plus(char *flags)
{
	int i;

	i = 0;
	while (flags[i] && flags[i] != '+')
		i++;
	if (flags[i] == '+')
		return (1);
	return (0);
}

int		checking_for_zero(char *flags)
{
	int i;

	i = 0;
	while (flags[i] && flags[i] != '0')
		i++;
	if (flags[i] == '0')
		return (1);
	return (0);
}

int		checking_for_minus(char *flags, int *width)
{
	int i;

	if (*width < 0)
	{
		*width = *width * -1;
		return (1);
	}
	i = 0;
	while (flags[i] && flags[i] != '-')
		i++;
	if (flags[i] == '-')
		return (1);
	return (0);
}
