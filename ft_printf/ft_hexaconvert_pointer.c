/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaconvert_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:18:04 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/12 04:50:56 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_hex(long int *ptr, long int counter)
{
	long int	i;

	i = counter - 1;
	while (i >= 0)
	{
		if (ptr[i] > 9)
			ptr[i] = ptr[i] + 39;
		ft_putchar_fd(ptr[i] + '0', 1);
		i--;
	}
}

static int	calculate_hex_counter(unsigned long int num)
{
	long int	counter;

	counter = 0;
	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	return (counter + 1);
}

int	ft_hexaconvert_pointer(unsigned long int num)
{
	long int			i;
	long int			counter;
	unsigned long int	temp;
	long int			*ptr;

	i = 0;
	counter = 0;
	temp = num;
	counter = calculate_hex_counter(num);
	ptr = malloc(sizeof(long int) * counter);
	if (!ptr)
		return (-1);
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
