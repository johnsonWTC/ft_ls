/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:45:41 by jdubula           #+#    #+#             */
/*   Updated: 2018/08/10 11:45:46 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			ft_del_str(wchar_t **str, wchar_t **arg)
{
	free(*str);
	free(*arg);
	*arg = NULL;
	*str = NULL;
}