/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:19:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/16 23:37:00 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_printf(size_t n, char c)
{
	int	counter;

	counter = ft_calculate_digit_base(n, 16);
	if (c == 'p')
	{
		ft_putstr_fd("0x", 1);
		counter = counter + 2;
		c = 'x';
	}
	if (n >= 16)
	{
		ft_pointer_printf(n / 16, c);
		ft_pointer_printf(n % 16, c);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + 48, 1);
		else if (c == 'x')
			ft_putchar_fd(n + 87, 1);
		else
			ft_putchar_fd(n + 55, 1);
	}
	return (counter);
}
