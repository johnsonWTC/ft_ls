/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:17:11 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 13:17:19 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb = nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	return (1);
}
