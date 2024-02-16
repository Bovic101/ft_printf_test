/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:07:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/16 23:47:00 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);
int	ft_str_printf(va_list list);
int	ft_int_dec_number_print(long long int n);
int	ft_pointer_printf(size_t n, char c);
int	ft_characater_printf(char c);
int	ft_conversion_specifier(const char c, va_list list, int *i);
int	ft_calculate_digit_base(size_t n, int num);

#endif