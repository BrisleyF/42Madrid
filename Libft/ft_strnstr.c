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

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char * )haystack);
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

// La funcion ft_strnstr de tipo char* que retorna la posicion en la que
// encuentra la coincidencia o NULL si no la encuentra.
// Recibe 3 argumentos:
// - const char *haystack cadena origen donde se hara la busqueda.
// - const char *needle sub cadena a comparar con *haystack.
// - size_t len es el número máximo de caracteres que se deben examinar en
// haystack.
// Se crean dos contadores i y j, inicializados en 0.
// Se realiza una condicional de seguridad, preguntando si el puntero needle
// no tiene direccion de memoria asignada (NULL) || si la cadena *needle
// ha llegado al terminal nulo.
// true -> retorna la cadena de origen y se hace un casteo a tipo char. Lo que
// indica que no hara ninguna comparcion.
// false -> 
// while1 (si el contenido de la posicion a evaluar de haystack sea diferente 
// al terminal nulo && i sea menor a len).
// true while1 -> 
// while2 -> verifica si el carácter en la posición j de la cadena needle
// es igual al carácter en la posición i + j. Por ejemplo, si "i" es 5 y "j" es
// 2, entonces "i + j" sería 7. Esto significa que estamos comparando el tercer
// carácter de "needle" con el carácter en la séptima posición de "haystack".
// && que la suma de los contadores i y j sean menor que len.
// true while2 -> 
// condicion -> si needle llego al terminar nulo, retorna la posicion en la que
// encuentra la coincidencia. De lo contraio se incrementa j++.
// false while2 -> se incrementa i++.
// false while1 -> retorna NULL.


