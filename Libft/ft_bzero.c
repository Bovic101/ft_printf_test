/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 01:36:22 by vodebunm          #+#    #+#             */
/*   Updated: 2023/12/06 03:09:34 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// erases byte in the memory locations and start them to zero
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
