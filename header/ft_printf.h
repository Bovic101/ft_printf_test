/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:07:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/13 05:45:10 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

int	ft_printf(const char *s, ...);
int	ft_str_printf(va_list list);
int	ft_hexaconvert_printf(va_list list);
int	ft_hexaconvert_up_printf(va_list list);
int	ft_int_dec_number_print(long long int n);
int	ft_hexaconvert_pointer(unsigned long int num);
int	ft_pointer_printf(va_list list);
int	ft_characater_printf(char c);
int	ft_conversion_specifier(const char c, va_list list, int *i);

#endif