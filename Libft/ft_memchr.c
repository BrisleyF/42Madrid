/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:12:01 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/25 11:12:05 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// La funcion ft_memchr se utiliza para buscar bytes dentro de cualquier región
// de memoria. Es de tipo void puntero, retorna un puntero void con la direccion
// de memoria, de la primera ocurrencia encontrada(posicion). Es decir,
// retornara el puntero *s con la posicion de la ocurrencia.
// Esta funcion recibe 3 argumentos:
// - *s es el puntero o la cadena que se va a evaluar.
// - int c es el caracter que se va a buscar en *s.
// - size_t n es la cantidad de bytes que va a buscar dentro del bloque total de
// memoria.
// Se crea una variable i, que se usara de contador y se inicializa en 0.
// Se crea un puntero unsigned char	*str para asignarle la misma direccion de
// memoria del puntero original (*s) haciendo un casting del tipo de dato.
// Se usa un while con la siguiente condicion:
// - La variable i tiene que ser menor que n.
// Si es true:
// - Se pregunta si el caracter de la posicion que se esta evaluando es igual al
// valor de c. 
// Si cumple la condicion, se retorna la direccion de memoria de *str apuntando
// a la posicion que encontro la coincidencia.
// Si no existe coincidencia, se incrementa el puntero original (*s++), con el
// fin de seguir evaluando el resto de caracteres.
// Si la condicionn del while es falsa:
// - Se retorna NULL.
