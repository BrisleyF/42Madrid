/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:43:50 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/03 12:43:58 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Su objetivo principal es duplicar una cadena de caracteres (string).
// La función strdup() toma una cadena de caracteres como argumento y devuelve
// un puntero a una nueva cadena que es una copia exacta de la cadena original. 
// "Estándar C ANSI" y "estándar POSIX" son términos que se refieren a dos
// conjuntos diferentes de normas y especificaciones en el ámbito de la
// programación, específicamente en el contexto del lenguaje de programación C
// (Estándar C ANSI) y los sistemas operativos UNIX (estándar POSIX).
// Internamente, strdup() reserva memoria dinámicamente para almacenar la copia
// de la cadena, utilizando malloc() o una función similar, por lo que es
// responsabilidad del programador liberar esta memoria cuando ya no sea
// necesaria, utilizando la función free().
// ft_strlen(s1): Primero, necesitamos obtener la longitud de la cadena
// original. En este caso, la longitud de "Hola" es 4 caracteres.
// (ft_strlen(s1) + 1): Luego, sumamos 1 a la longitud para incluir el carácter
// nulo terminador '\0'. En este caso, sería 5.
// sizeof(*s1): Esto devuelve el tamaño de un solo carácter de la cadena
// original. En C, el tamaño de un char suele ser de 1 byte.
// sizeof(*s1) * (ft_strlen(s1) + 1): Multiplicamos el tamaño de un carácter por
// la longitud de la cadena más 1 para obtener el tamaño total necesario para la
// cadena duplicada. En este ejemplo, sería 1 * 5, resultando en 5 bytes.
// malloc(sizeof(*s1) * (ft_strlen(s1) + 1)): Utilizamos malloc para asignar
// dinámicamente memoria para la nueva cadena. En este caso, se asignarán 5
// bytes de memoria.  
// (char*): La función malloc devuelve un puntero de tipo void*, por lo que lo
// convertimos explícitamente a un puntero de tipo char* usando (char*).
// Esto es necesario porque estamos asignando memoria para una cadena de
// caracteres.
// El bucle copia cada carácter de la cadena s1 en la cadena str hasta que
// alcanza el carácter nulo terminador '\0'.
// Finalmente, se agrega el carácter nulo terminador '\0' al final de la cadena
// str para asegurarse de que sea una cadena de caracteres válida.
// La función devuelve el puntero a la cadena duplicada str.

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
