/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:10:24 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/25 11:10:30 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// La funcion ft_memcmp se utiliza para comparar dos bloques de memoria byte a
// byte. Es de tipo int y retorna un entero que representa la diferencia entre
// los valores ASCII de los caracteres que no coinciden.
// Recibe 3 argumentos:
// - *s1 primer bloque de memoria a comparar.
// - *s2 segundo bloque de memoria a comparar. 
// - size_t cantidad de bytes a evaluar(hasta donde se compara).
// Se crea un contador i tipo size_t y se inicializa a 0.
// Se crea dos punteros de tipo unsigned char que apunten a la direccion de
// memoria de los punteros originales. 
// while (que i sea menor que n)
// tru while -> (que el caracter en la posicion que se esta evaluando de str1
// sea distinto a el caracter en la posicion que se esta evaluando de str2)
// tru -> retorna la resta de los valores de la tabla ASCII correspondiente a
// los caracteres que no coinciden.
// Nota: Si quiero comparar 10 bytes pero el numero 5 deja de coincidir,
// se va a comparar y restar el primero en no coincidir, no el ultimo.
// false -> si los caracteres son iguales, se incrementa i++ para evaluar el
// resto de caracteres.
// false while -> no entra al bucle y retorna 0.