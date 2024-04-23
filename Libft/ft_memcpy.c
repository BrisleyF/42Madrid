/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:55 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/20 17:00:01 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (src == NULL && dst == NULL)
	{
		return (NULL);
	}
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// La funcion ft_memcpy representa un puntero genérico que puede apuntar a
// cualquier tipo de dato, con el proposito de retornar dicho puntero.
// Esta funcion recibe 3 argumentos: 
// - void *dst es un puntero que contiene la direccion de memoria, donde se hara
// la copia.
// - const void *src es un puntero que contiene la direccion de memoria, donde
// se almacena el contenido de origen, es decir, el que se va a copiar en dst.
// - size_t n es la cantidad de memoria en bytes que va a copiar.
// Creo un unsigned char *d para asignarle la direccion de memoria de *dst y a 
// la vez le cambio el tipo de dato.
// Creo un unsigned char *s para asignarle la direccion de memoria de *src y a 
// la vez le cambio el tipo de dato. Es una constante porque solo se copiara su
// contenido no se modificara.
// Creo una variable size_t i que sera un contador y la inicializo en 0.
// Hago un while con la condicion: i tiene que ser menor que n
// Si la condicion cumple:
// - En la primera posicion de d se le asigna el contenido de la primera
// posicion de s. 
// - Luego se incrementa el contador.
// De esta manera se realiza la copia caracter por cararter hasta que la
// condicion no se cumpla.
// Finalmente se retorna dst.