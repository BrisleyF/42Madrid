/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:29:52 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/23 14:29:56 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_tolower, convierte un carácter en mayúscula a su equivalente
// en minúscula.
// Dentro de la función, hay una condición if que verifica si el valor del
// carácter está dentro del rango de caracteres mayúsculos, es decir,
// entre 'A' y 'Z' inclusive.
// Si el carácter es una mayúscula, se le suma 32 (que es la diferencia entre
// los valores ASCII de una letra mayúscula y su equivalente en minúscula).
// Esto convierte el carácter en su equivalente en minúscula.
// Finalmente, la función devuelve el valor de c, que puede ser el mismo valor
// si no era una letra mayúscula o su equivalente en minúscula si lo era.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
