/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:23:32 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/20 18:23:36 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función memmove en C se utiliza para copiar un bloque de 
// memoria desde una ubicación de origen a otra ubicación de destino, 
// incluso si las áreas de memoria se superponen. 
// "Superponer" en el contexto de la memoria se refiere a la situación
// en la que dos áreas de memoria ocupan algunos de los 
// mismos bytes de memoria. 
// Esto puede ocurrir cuando estás copiando o moviendo datos
// de un lugar a otro en la memoria y las áreas de origen 
// y destino se solapan parcial o completamente.
// Cuando las áreas de memoria se superponen, puede ser complicado copiar 
// o mover los datos sin corromperlos o perder información.
// Si la condición d >= s se cumple, la función ft_memmove copia los bytes desde
// el final del bloque de memoria hasta el principio, es decir, 
// de atrás hacia adelante.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
