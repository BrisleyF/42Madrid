/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:26:45 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/01 16:26:48 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función strnstr() es una función de la biblioteca estándar de C que se
// utiliza para buscar la primera aparición de una subcadena en una cadena
// principal, pero con una diferencia importante: permite especificar la
// cantidad máxima de caracteres a buscar en la cadena principal.
// haystack: es un puntero al inicio de la cadena principal en la que deseamos
// buscar. 
// needle: es un puntero a la subcadena que estamos buscando dentro de
// la cadena principal.
// len: es el número máximo de caracteres que se deben examinar en haystack.
// La función devuelve un puntero al comienzo de la primera ocurrencia de needle
// en haystack, o devuelve NULL si needle no está presente en los primeros len
// caracteres de haystack.
// *needle: Esto accede al primer carácter de la cadena needle.
// '\0': Esto representa el carácter nulo, que es el carácter de terminación de
// cadena en C. 
// Si *needle es igual a '\0', significa que la cadena needle está vacía.
// 'needle == NULL': Esto verifica si needle es un puntero nulo. 
// Si needle es NULL, significa que la cadena needle no apunta a ninguna
// dirección de memoria válida.
// Se inicia un segundo bucle while que compara los caracteres de needle con
// los caracteres de haystack mientras los caracteres coincidan y no se haya
// superado la longitud máxima len.
// needle[j] == haystack[i + j]: Esta parte verifica si el carácter en la
// posición j de la cadena needle es igual al carácter en la posición i + j
// de la cadena haystack.
// i + j < len: Esta parte verifica que la suma de i y j sea menor que len.
// Esto asegura que no se exceda la longitud máxima len especificada para la
// búsqueda en haystack. Es decir, garantiza que no nos salgamos de los límites
// de haystack mientras buscamos la subcadena.
// En conjunto, ((char*)haystack + i) significa que estamos tomando el puntero
// haystack, lo estamos convirtiendo en un puntero a char para poder realizar
// aritmética de punteros, y luego estamos avanzando i posiciones desde el
// principio de la cadena haystack. Esto nos da un puntero al lugar en haystack
// donde se encontró la subcadena.
// Esto es útil porque proporciona una forma de indicar al usuario dónde se
// encontró la subcadena dentro de la cadena principal.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
