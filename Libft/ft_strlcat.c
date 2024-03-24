/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:48:53 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:59 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_strlcat concatena la cadena de origen src al final del búfer
// de destino dst, asegurándose de no exceder el tamaño máximo especificado
// del búfer de destino dstsize. Se inicializan tres variables: londst para
// almacenar la longitud actual del búfer de destino, lonsrc para almacenar
// la longitud de la cadena de origen y cont para un contador que rastrea
// la posición actual en el búfer de destino.
// Se calcula la longitud actual del búfer de destino (londst) utilizando
// la función ft_strlen.
// Se calcula la longitud de la cadena de origen (lonsrc) utilizando la
// función ft_strlen.
// Se verifica si el tamaño del búfer de destino (dstsize) es menor o igual
// a la longitud actual del búfer de destino (londst). Si es así, significa
// que no hay espacio suficiente en el búfer de destino para concatenar la
// cadena de origen completa.
// En este caso, la función devuelve la suma de la longitud de la cadena de
// origen y el tamaño del búfer de destino.
// Se inicializa el contador cont en la posición actual del búfer de
// destino (londst).
// Se ejecuta un bucle while que copia los caracteres de la cadena de origen
// al búfer de destino mientras haya espacio disponible en el búfer
// (cont < (dstsize - 1)) y mientras no se haya alcanzado el final de la
// cadena de origen (*src != '\0').
// Se asegura que el búfer de destino esté terminado con un carácter nulo
// después de la copia de los caracteres de la cadena de origen.
// La función devuelve la suma de la longitud original del búfer de destino
// y la longitud de la cadena de origen.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
