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

// Esta funcion ft_strchr es de tipo char* y retorna el *s en la posicion donde
// encuentra la primera coincidencia. Recibe como argumentos:
// - El puntero donde se realizara la busqueda (*s).
// - int c es el caracter a comparar. 
// Se utiliza un while para recorrer el puntero y la condicion es la siguiente:
// - Si el caracter a evaluar de la posicion del puntero es distinto al valor de
// de c.
// Si se cumple la condicion: 
// - Se crea una condicion para reconocer si el caracter del puntero es igual al
// terminador nulo. Si lo es se retorna NULL. De lo contrario se incrementa s++
// indicando de esta manera que el puntero ruede una posicion hacia adelante para
// evaluar al siguiente caracter.
// En caso de encontrar la primera coincidencia, se retorna el puntero (*s)
// justo en la posicion donde coindice. Se realiza un casting de const char *
// a char * para permitir que la función devuelva un puntero no constante.