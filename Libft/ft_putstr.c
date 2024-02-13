/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 02:20:23 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/04 02:33:05 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		return (write(1, "(nill)", 6));
	}
	while (s[i])
	{
		i++;
	}
	return (write(1, s, i));
}
