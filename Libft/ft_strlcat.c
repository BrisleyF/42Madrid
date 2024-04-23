/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:48:53 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/22 22:48:59 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	if ((src == NULL || dst == NULL) && dstsize < 1)
		return (0);
	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}

// La funcion ft_strlcat es de tipo size_t , lo que retornara un numero que
// representa el tamaño de memoria en bytes de la concatenacion dst + src. 
// Asegurándose de no exceder el tamaño máximo especificado del destino
// (dstsize).
// Esta funcion recibe 3 argumentos:
// - char *dst es un puntero con la direccion de memoria donde se almacenara
// la concatenacion de src.
// - const char *src es un puntero con la direccion de memoria que contiene la
// cadena origen.
// - size_t dstsize tamaño en bytes de dst, se obtiene con sizeof(dst).
// - Se crea la variable size_t	londst y se asigna con la longitud de dst.
// - Se crea la variable size_t	lonsrc y se asigna con la longitud de src.
// - Se crea la variable size_t cont que sera un contador y se asigna con el
// valor de londst.
// Con la primera condicional, nos aseguramos que los primeros dos argumentos
// (las cadenas a concatenar) no sean nulos && que el tamaño en bytes de dst
// (dstsize) sea mayor a 1.
// Se hace un while con la siguiente condicion:
// - El indice de src que se esta evaluando no sea el terminador nulo(final
// de la cadena). && que el contador cont sea menor que la resta de
//(dstsize - 1) para dejar disponible el espacio del \0.
// En este punto cont esta asignada con el numero total de caracteres de la
// cadena dst y se usara como indice para iterar y saber donde va empezar la
// concatenacion.
// Si se cumple la condicion se ejecuta la intruccion para hacer la
// concatenacion.
// - *(dst + cont++) = *src++ : accedemos al valor del puntero *dst(valor en
// posicion inicial) y lo desplazamos hasta la posicion cont y a la vez se
// incrementa, con el fin de asignarle el valor de src desde la posicion inicial
// y src se incrementa hasta llegar al \0.
// De esta manera se hace la concatenacion de src en el destino.
// Despues que el bucle de detenga, la variable cont tendra el valor donde
// correponde asignar el \0.
// Finalmente se retorna la suma de longitud de las cadenas que se acaban de
// concatenar. 