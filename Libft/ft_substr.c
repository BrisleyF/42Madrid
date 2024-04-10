/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:45:10 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/05 12:45:13 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_substr es una función que toma una cadena de texto (string) como entrada
// y devuelve una subcadena (substring) de esa cadena original, basada en los
// índices de inicio y longitud especificados.
// Función auxiliar ft_strncpy:
// Esta función realiza una copia segura de src en dst hasta una longitud
// máxima de len. Si la longitud de src es menor que len, la función 
// todos los caracteres de src en dst y luego completa dst con caracteres nulos
// ('\0') hasta que len se alcance. Esta función se usa para copiar una parte
// de la cadena original en la subcadena resultante. Si len es mayor que la
// longitud de la subcadena deseada, esta función se asegura de que la
// subcadena esté terminada correctamente con un carácter nulo.
// Función ft_substr:
// Esta función toma tres argumentos: una cadena de caracteres s, un índice de
// inicio start, y una longitud len.
// Comienza por verificar si s es nulo. Si es así, devuelve NULL, indicando que
// no hay una cadena válida para operar.
// Luego, calcula la longitud de la cadena s utilizando ft_strlen.
// Compara el índice de inicio start con la longitud de la cadena s. Si start es
// mayor o igual que la longitud de s, devuelve una cadena vacía, lo que
// significa que la subcadena solicitada está más allá de los límites de la
// cadena original.
// Si la longitud de la subcadena (len) es mayor que la cantidad de caracteres
// disponibles después de start, ajusta len para asegurarse de que la subcadena
// no exceda la longitud de s a partir de start.
// Luego, asigna memoria para almacenar la subcadena resultante (substr)
// utilizando malloc.
// Si la asignación de memoria es exitosa, utiliza la función ft_strncpy para
// copiar la parte relevante de la cadena original (s) en la subcadena substr.
// Finalmente, agrega un carácter nulo al final de substr para asegurar que esté
// correctamente terminado como una cadena de caracteres válida y devuelve
// substr

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	new_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	if (s_len - start < len)
		new_len = s_len - start;
	else
		new_len = len;
	substr = malloc(new_len + 1);
	if (substr)
	{
		ft_strncpy(substr, s + start, new_len);
		substr[new_len] = '\0';
	}
	return (substr);
}
