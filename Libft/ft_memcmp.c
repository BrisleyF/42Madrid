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

// memcmp() es una función en C que se utiliza para comparar dos bloques de
// memoria byte a byte.  interpretando cada byte como un unsigned char.
// El valor de retorno de memcmp() indica la relación entre los bloques de
// memoria comparados:
// Si el primer byte que difiere en s1 es menor que el correspondiente en s2,
// memcmp() devuelve un número negativo.
// Si los bloques de memoria son idénticos, memcmp() devuelve cero.
// Si el primer byte que difiere en s1 es mayor que el correspondiente en s2,
// memcmp() devuelve un número positivo.
// Se declaran tres variables: i (un contador), str1 (un puntero a unsigned
// char que apunta al primer bloque de memoria) y str2 (un puntero a unsigned
// char que apunta al segundo bloque de memoria).
// Resumen:
// - Si se compara los dos bloques de memoria y no hay coincidencia: 
// Se compara el primer byte de acuerdo a su numero ascii, se retorna la
// resta de estos dos valores (s1 y s2).
// - Si se compara los dos bloques de memoria y hay coincidencia:
// Se comparara el byte que no coincide de acuerdo a su numero ascii, se
// retorna la resta de estos dos valores (s1 y s2).
// Nota: Si quiero comparar 10 bytes pero el numero 5 deja de coincidir,
// se va a comparar y restar el primero en no coincidir, no el ultimo.

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
