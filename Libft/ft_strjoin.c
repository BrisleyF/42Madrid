/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:42:39 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/05 14:42:42 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strjoin concatena dos cadenas de caracteres en una nueva cadena.
// Función auxiliar ft_strcpy:
// Esta función copia una cadena src en otra cadena dst, incluyendo el carácter
// nulo de terminación ('\0'). Utiliza un bucle while para iterar sobre los
// caracteres de src y copiarlos uno a uno en dst.
// Después de copiar todos los caracteres de src, agrega manualmente el carácter
// nulo de terminación al final de dst.
// Retorna un puntero a dst, la cadena resultante.
// Función ft_strjoin:
// Esta función toma dos argumentos: dos cadenas de caracteres s1 y s2.
// Comienza por verificar si alguna de las cadenas es nula. Si es así, devuelve
// NULL, indicando que no hay cadenas válidas para concatenar.
// Calcula las longitudes de las cadenas s1 y s2 utilizando la función
// ft_strlen.
// Luego, asigna memoria para la nueva cadena (new_str) utilizando malloc.
// La longitud de la nueva cadena será la suma de las longitudes de s1 y s2,
// más 1 para el carácter nulo de terminación.
// Si la asignación de memoria es exitosa, utiliza la función ft_strcpy para
// copiar primero s1 y luego s2 en new_str.
// Retorna un puntero a la nueva cadena concatenada.

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc(len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcpy(new_str + len_s1, s2);
	return (new_str);
}
