/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:36:17 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/22 17:36:21 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// La funcion ft_strlcpy es de tipo de dato size_t, se utiliza para representar
// tamaños de objetos(variable, estructura de datos,array) y tamaños de memoria
// en bytes. Esta funcion retorna el tamaño en bytes de la cadena de origen(src)
// se pudiera representar tambien como la longitud de la cadena, ya que un
// caracter pesa 1 byte.
// Esta funcion recibe 3 argumentos: 
// - char *dst que es el puntero destino donde se realizara la copia.
// - const char *src puntero origen que no se modificara, solo se copiara su
// contenido en dst.
// - size_t dstsize tamaño en bytes de dst, se obtiene con sizeof(dst).
// Se crea una variable 'len' de tipo de dato size_t para almacenar el resultado
// de la funcion ft_strlen pasandole como argumento a src.
// Se crea una variable i que sirve de contador y se inicializa en 0.
// Con la condicion (dst == NULL && src == NULL) se pregunta si el destino y el
// origen son nulos, en caso de que sea verdadero se retorna 0 lo que indica que
// no se ha realizado ninguna copia.
// Se hace un while con la siguiente condicion: 
// - El indice de src que se esta evaluando no sea el terminador nulo(final
// de la cadena). && que el contador i sea menor que la resta de (dstsize - 1)
// para dejar disponible el espacio del \0. 
// Si la condicion cumple:
// - En la primera posicion de dst se le asigna el contenido de la primera
// posicion de src. 
// - Luego se incrementa el contador.
// De esta manera se realiza la copia caracter por cararter hasta que la
// condicion no se cumpla. 
// El bucle termina habiendo copiado todos los caracteres y dejando espacio para
// asignar el \0.
// Por ultimo se retorna la longitud de la cadena src (len).