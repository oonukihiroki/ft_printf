/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hohnuki <hohnuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:12:13 by hohnuki           #+#    #+#             */
/*   Updated: 2021/11/22 20:32:40 by hohnuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	ft_printf("%d\n", ft_printf("%x\n", LONG_MAX));
	printf("%d\n", printf("%x\n", LONG_MAX));
}
