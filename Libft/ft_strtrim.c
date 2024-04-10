/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:13:12 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/05 16:13:16 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la función ft_strtrim elimina los caracteres especificados en el
// conjunto set tanto del principio como del final de la cadena s1.
// Función ft_is_in_set:
// Esta función es una función auxiliar que toma un carácter c y un conjunto de
// caracteres set. Itera sobre los caracteres en set utilizando un bucle while
// y compara cada carácter con c.
// Si encuentra una coincidencia, devuelve 1 indicando que c está en set. Si no
// encuentra ninguna coincidencia, devuelve 0.
// Función ft_strtrim:
// Toma dos argumentos: una cadena de caracteres s1 y un conjunto de caracteres
// set. Verifica si tanto s1 como set son no nulos. Si alguna de las dos es 
// nula, devuelve NULL.
// Encuentra la posición de inicio (start) y la posición final (end) de la
// subcadena resultante de s1 después de eliminar los caracteres del conjunto
// set desde el principio y el final.
// start: Comienza desde el primer carácter de s1 y avanza mientras los
// caracteres de s1 estén presentes en set.
// end: Comienza desde el último carácter de s1 y retrocede mientras los
// caracteres de s1 estén presentes en set.
// Asigna memoria para la nueva cadena str utilizando malloc, con longitud
// end - start + 1, lo que garantiza espacio suficiente para almacenar la
// subcadena resultante junto con el carácter nulo de terminación.
// Copia los caracteres de s1 desde la posición start hasta end en la nueva
// cadena str.
// Termina la nueva cadena str con un carácter nulo de terminación.
// Retorna un puntero a la nueva cadena str.

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
