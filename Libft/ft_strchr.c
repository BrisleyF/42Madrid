/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:19:20 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/23 18:19:37 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Se utiliza para buscar la primera aparición de un carácter específico en
// una cadena de caracteres (string).
// La función devuelve un puntero a un carácter (char *).
// while (*s != (char) c): Este es un bucle while que se ejecuta mientras el
// carácter apuntado por s no sea igual al carácter c que estamos buscando.
// La expresión (char) c se usa para convertir el valor c a un carácter,
// ya que c se pasa como un entero. Esto asegura que se comparen tipos de
// datos compatibles.
// if (*s == '\0') return (0);: Dentro del bucle while, si llegamos al final
// de la cadena ('\0'), significa que el carácter c no está presente en la
// cadena s, por lo que devolvemos un puntero nulo (0).
// s++;: Si el carácter actual no es igual a c, avanzamos al siguiente carácter
// en la cadena s. Esto nos permite continuar buscando el carácter c en la
// cadena.
// return ((char *) s);: Una vez que encontramos el carácter c en la cadena s,
// devolvemos un puntero a la posición de ese carácter en la cadena. Se realiza
// un casting de const char * a char * para permitir que la función devuelva
// un puntero no constante.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *) s);
}
