/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:22:04 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/04 05:46:07 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to print a string using the variadic function
int	ft_str_printf(va_list list)
{
	char	*s;

	s = va_arg(list, char *);
	if (!s)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
