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

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

// Esta funcion ft_strchr es de tipo char* y retorna el *s en la posicion donde
// encuentra la ultima coincidencia. Recibe como argumentos:
// - El puntero donde se realizara la busqueda (*s).
// - int c es el caracter a comparar.
// Se obtiene la longitud de la cadena utilizando la función ft_strlen,
// guardando el resultado en una variable llamada len.
// Se utiliza un while con la siguiente condicion:
// - Si el contador(len) es mayor o igual a 0.
// Si se cumple la condicion: 
// - Se crea una condicion para saber si la ultima posicion del puntero es igual
// al caracter c. Si lo es se retorna la direccion de memoria (&s) justo en la
// posicion donde coindice. Se realiza un casting de const char * a char * para
// permitir que la función devuelva un puntero no constante.
// - Si la condicion no cumple, se realiza un decremento de len--, indicando de
// esta manera que el puntero ruede una posicion hacia atras para evaluar al
// siguiente caracter.
// Si nunca encuentra conincidencia retorna NULL.