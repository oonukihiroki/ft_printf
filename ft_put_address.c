/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:16 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/22 20:19:16 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_address(unsigned long long c)
{
	size_t	i;

	ft_putstr("0x");
	if (!c)
	{
		ft_putchar('0');
		return (3);
	}
	i = ft_putbit_lowercase(c) + 2;
	return (i);
}
