/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:08:38 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/05 21:08:41 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_split divide una cadena en palabras separadas por un carácter
// delimitador (c). 
// Función ft_free:
// Utiliza un bucle while para iterar sobre las subcadenas en result, liberando
// la memoria asignada para cada una con la función free.
// Finalmente, libera la memoria del arreglo result con free.
// Función ft_count_words:
// Esta función cuenta el número de palabras en la cadena s separadas por el
// carácter delimitador c.
// Utiliza un bucle while para iterar sobre los caracteres de la cadena s.
// Cuando encuentra un carácter que no es igual a c y el siguiente carácter
// es c o el carácter nulo ('\0'), incrementa el contador words_amount,
// indicando que se ha encontrado una nueva palabra.
// Función ft_write_result:
// Esta función divide la cadena s en palabras y escribe las palabras
// divididas en el arreglo result.
// Utiliza tres variables start, i, y word para rastrear la posición de inicio
// de cada palabra, la posición actual en la cadena s, y el índice de la
// palabra en el arreglo result, respectivamente.
// Utiliza un bucle while para iterar sobre los caracteres de la cadena s.
// Cuando encuentra un carácter que no es igual a c y el siguiente carácter
// es c o el carácter nulo ('\0'), utiliza la función ft_substr para extraer
// la subcadena que representa la palabra desde la posición start hasta i.
// Si la llamada a ft_substr falla (devuelve NULL), libera la memoria asignada
// para las subcadenas ya creadas utilizando ft_free y devuelve NULL.
// Si encuentra un carácter igual a c, actualiza la posición de inicio start
// a i + 1.
// Cuando el bucle termina, establece el último elemento del arreglo result en
// NULL para marcar el final del arreglo.
// Función ft_split:
// Esta es la función principal que el usuario llama para dividir la cadena s
// en palabras.
// Comienza verificando si la cadena s es nula. Si es así, devuelve NULL.
// Luego, utiliza malloc para asignar memoria para el arreglo result, que
// contendrá punteros a las subcadenas resultantes.
// Llama a ft_count_words para obtener el número de palabras en s.
// Llama a ft_write_result para dividir la cadena s en palabras y escribir
// las palabras divididas en el arreglo result.
// Retorna el arreglo result, que contiene las palabras divididas. Si ocurre
// algún error durante el proceso, la función devuelve NULL.

#include "libft.h"

static	void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static	size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words_amount;

	i = 0;
	words_amount = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words_amount++;
		i++;
	}
	return (words_amount);
}

static	char	**ft_write_result(char const *s, char c, char	**result)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[word] = ft_substr(s, start, i - start + 1);
			if (!result[word])
			{
				ft_free(result);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	result[word] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (0);
	result = ft_write_result(s, c, result);
	return (result);
}
