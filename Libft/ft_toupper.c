/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:40:33 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/23 13:40:38 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Su propósito es convertir un carácter en minúscula a su equivalente en
// mayúscula. Dentro de la función, hay una condición if que verifica si el
// valor del carácter está dentro del rango de caracteres minúsculos, es decir,
// entre 'a' y 'z' inclusive.
// Si el carácter es una minúscula, se le resta 32 (que es la diferencia entre
// los valores ASCII de una letra minúscula y su equivalente en mayúscula).
// Esto convierte el carácter en su equivalente en mayúscula.
// Finalmente, la función devuelve el valor de c, que puede ser el mismo
// valor si no era una letra minúscula o su equivalente en mayúscula si lo era.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
