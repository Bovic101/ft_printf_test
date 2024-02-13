/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaconvert_up_printf.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:57:45 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/12 05:08:29 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_hex(int *ptr, int counter)
{
	int	i;

	i = counter - 1;
	while (i >= 0)
	{
		if (ptr[i] > 9)
			ptr[i] = ptr[i] + 7;
		ft_putchar_fd(ptr[i] + '0', 1);
		i--;
	}
}

static int	calculate_hex_counter(unsigned int num)
{
	int	counter;

	counter = 0;
	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	return (counter + 1);
}

int	ft_hexaconvert_up_printf(va_list list)
{
	int				i;
	int				counter;
	unsigned int	num;
	unsigned int	temp;
	int				*ptr;

	i = 0;
	counter = 0;
	num = va_arg(list, unsigned int);
	temp = num;
	counter = calculate_hex_counter(num);
	ptr = malloc(sizeof(int) * counter);
	if (!ptr)
		return (-1);
	i = 0;
	while (i < counter)
	{
		ptr[i] = temp % 16;
		temp = temp / 16;
		i++;
	}
	convert_to_hex(ptr, counter);
	free(ptr);
	return (counter);
}
