/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:50:22 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/18 14:50:34 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la función ft_memset llena los primeros len bytes del bloque
// de memoria apuntado por b con el valor de byte c. 
// Luego devuelve un puntero al bloque de memoria modificado.
// size_t se utiliza para indicar el tamaño en bytes del bloque
// de memoria que se va a llenar. 
// Esto asegura que la función maneje de manera eficiente y 
// precisa el tamaño del bloque de memoria que se está modificando.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
