/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:55 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/20 17:00:01 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Esta funcion copia un bloque de memoria desde una ubicación 
// de origen a otra ubicación de destino.
// Lo que facilita la manipulación y el procesamiento de 
// datos en una variedad de escenarios de programación.
// memcpy operan en bytes individuales, por esta razon se 
// tiene que cambiar el tipo de dato a char.
// Evitando problemas como Interpretación incorrecta de los datos,
// Posible desbordamiento de memoria, Errores de alineación.
// El operador de casting, también conocido como operador 
// de conversión de tipos.
// Se utiliza colocando el tipo de dato deseado entre paréntesis 
// antes de la variable o expresión que se desea convertir. 

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
