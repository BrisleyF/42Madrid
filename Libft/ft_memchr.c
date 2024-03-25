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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
