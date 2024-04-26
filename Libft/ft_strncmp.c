/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:52:23 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/24 16:52:28 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			result = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (result);
		}
		i++;
	}
	return (result);
}

// Esta funcion ft_strncmp es de tipo int, retorna un numero entero y recibe 3
// argumentos:
// - const char *s1 la primera cadena que se va a comparar.
// - conts char *s2 segunda cadena a comparar.
// - size_z n numeros de caracteres que se tomara en cuenta para hacer la
// comparacion.
// Se crea una variable contador (i), se inicializa en 0(iterar).
// Se crea una varianle int (result),
// se inicializa en 0 ( i < n = false -> return(0)).
// Se utiliza un while con la siguiente condicion:
// - i sea menor que n &&
// - El caracter de la posicion a evaluar de s1 no sea el final ||
// - El caracter de la posicion a evaluar de s2 no sea el final.
// Si la condicion es true: 
// - Se hace una condicion preguntando si los caracteres en las posiciones
// (s1 y s2) son distintos: 
// - true -> la variable result se le asigna el valor de la resta de ambos
// caracteres y se retorna result.
// - false -> incrementa i++ para moverse de posicion y seguir comparando los
// siguientes caracretes 
// En caso de que ya no se cumpla la condicion del while, retorna (0);
// result < 0 
// result == 0
// result > 0