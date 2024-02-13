/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:19:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/12 05:17:02 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_printf(va_list list)
{
	void		*p;
	long int	a;
	int			b;

	b = 0;
	p = va_arg(list, void *);
	if (p == NULL)
	{
		ft_putstr_fd("Nil", 1);
	}
	else
	{
		a = (unsigned long int)p;
		ft_putstr_fd("0x", 1);
		b = ft_hexaconvert_pointer(a);
	}
	return (b + 2);
}
