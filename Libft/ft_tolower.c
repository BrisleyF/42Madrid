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

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

// La funcion ft_tolower es de tipo int, retorna un int y recibe una variable
// tipo int. Tiene como proposito convertir caracteres que estan en mayuscula
// a minuscula. Esto se logra comparando con los valores de la tabla ASCII.
// Se usa una condicional para saber si el valor de c esta en el rango
// numerico que corresponde a las mayusculas(65 a 90 o 'A' a 'Z').
// Si cumple la condicion: 
// - Se realiza una suma al valor de c. La diferencia entre las letras
// minúsculas y mayúsculas es exactamente 32.
// Si c ya es una letra minuscula o cualquier otro carácter que no sea una
// letra, entonces simplemente se retorna c sin cambios.