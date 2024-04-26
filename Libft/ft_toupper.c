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

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32; 
	}
	return (c);
}

// La funcion ft_toupper es de tipo int, retorna un int y recibe una variable
// tipo int. Tiene como proposito convertir caracteres que estan en minuscula
// a mayuscula. Esto se logra comparando con los valores de la tabla ASCII.
// Se usa una condicional para saber si el valor de c esta en el rango
// numerico que corresponde a las minusculas(97 a 122 o 'a' a 'z').
// Si cumple la condicion: 
// - Se realiza una resta al valor de c. La diferencia entre las letras
// minúsculas y mayúsculas es exactamente 32.
// Si c ya es una letra mayúscula o cualquier otro carácter que no sea una
// letra, entonces simplemente se devuelve sin cambios.
