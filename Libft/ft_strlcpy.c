/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:36:17 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/22 17:36:21 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Se utiliza para copiar cadenas de caracteres de manera segura. 
// Es parte de la familia de funciones diseñadas para evitar errores comunes
// de manipulación de cadenas, como desbordamientos de búfer.
// Se usa la funcion ft_strlen que devuelve la longitud de una cadena de origen.
// 'dstsize < 1' Verifica si el tamaño del búfer de destino (dstsize)
// es suficiente para contener al menos el carácter nulo de terminación.
// Si no es así, se devuelve la longitud de la cadena de origen sin realizar
// ninguna copia.
// 'src[i] != '\0' && i < (dstsize - 1)' Asegura que el bucle continuará
// caracteres desde la cadena de origen a la cadena de destino mientras no haya
// copiando llegado al final de la cadena de origen y haya espacio disponible
// en el búfer de destino para el carácter nulo de terminación.
// 'dst[i] = src[i]' Se realiza la copia. 
// 'dst[i] = '\0' Se asegura de que el búfer de destino esté terminado con
// un carácter nulo.
// Se devuelve la longitud de la cadena de origen (len).

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
