/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:38:32 by jdubula           #+#    #+#             */
/*   Updated: 2018/09/17 14:38:40 by jdubula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				n_func(va_list ap, wchar_t *str, wchar_t **arg)
{
	int *g;

	g = va_arg(ap, void *);
	*g = wstr_len(str);
	if (!arg)
		exit(-1);
	free(*arg);
}