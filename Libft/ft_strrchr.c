/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:25:56 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/24 16:26:00 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_strrchr comienza obteniendo la longitud de la cadena s
// utilizando la función ft_strlen. Luego, comprueba si el carácter c
// es el carácter nulo ('\0'). Si es así, asigna ret al puntero al final de la
// cadena s.
// Si c no es el carácter nulo, inicializa ret como NULL y recorre la cadena s
// de atrás hacia adelante. Cuando encuentra la última ocurrencia de c, asigna
// ret al puntero a esa posición de la cadena y sale del bucle.
// Finalmente, devuelve ret, que es un puntero a la última ocurrencia del
// carácter c en la cadena s, o NULL si no se encuentra.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ret;

	i = ft_strlen(s);
	if (c == '\0')
		ret = (char *)(s + i);
	else
	{
		ret = NULL;
		while (i > 0)
		{
			i--;
			if (s[i] == (char)c)
			{
				ret = (char *)(s + i);
				break ;
			}
		}
	}
	return (ret);
}
