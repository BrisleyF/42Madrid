/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:12:01 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/25 11:12:05 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función memchr en lenguaje C se utiliza para buscar la primera ocurrencia
// de un byte específico dentro de una región de memoria dada. 
// La diferencia: strchr se utiliza específicamente para buscar letras o
// caracteres dentro de cadenas de texto, mientras que memchr se utiliza para
// buscar bytes dentro de cualquier región de memoria, no solo cadenas de texto.
// Puedes pensar en ello como buscar una moneda específica en una bolsa llena de
// monedas diferentes. No necesariamente tiene que ser una palabra o una cadena
// de texto; puede ser cualquier conjunto de datos.
// void *ft_memchr(const void *s, int c, size_t n): Esto define la función
// ft_memchr, que toma tres argumentos: un puntero s a los datos que se deben
// buscar, un byte c que se debe buscar en los datos y un tamaño n que
// especifica cuántos bytes se deben examinar. La función devuelve un puntero
// void *.
// unsigned char *str;: Aquí se declara un puntero str de tipo unsigned char *.
// Este puntero se utilizará para manipular los datos de entrada s. Se declara
// como unsigned char * para asegurar que podamos acceder a los bytes
// individuales  de los datos, independientemente de si s es un puntero a
// datos de tipo char o i = 0;: Se inicializa el contador i a 0.
// while (i < n): Este bucle while se ejecuta mientras i sea menor que n, lo que
// significa que continuará hasta que hayamos examinado los primeros n bytes de
// los datos.
// if (str[i] == (unsigned char)c) return ((void *)&str[i]);: Dentro del bucle,
// se compara el byte actual (str[i]) con el byte c. Si son iguales, significa
// que hemos encontrado el byte que estamos buscando, por lo que se devuelve un
// puntero al byte encontrado. Se utiliza un casting para convertir el puntero
// &str[i] al tipo void *.
// i++;: Se incrementa i para pasar al siguiente byte en los datos. a cualquier
// otro tipo.
// return (NULL);: Si llegamos al final del bucle sin encontrar el byte c dentro
// de los primeros n bytes, se devuelve un puntero NULL para indicar que el byte
// no se encontró.
// En resumen, esta función busca un byte específico dentro de los primeros n
// bytes de los datos apuntados por s. Si encuentra el byte, devuelve un puntero
// a ese byte; de lo contrario, devuelve NULL.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
