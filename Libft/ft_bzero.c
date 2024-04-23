/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:07:27 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/20 16:07:40 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// Esta funcion es de tipo de dato void lo que quiere decir que no retorna
// ningun valor. 
// Recibe dos argumentos: 
// - void *s es un puntero que contiene una direccion de memoria de un
// arreglo.
// - size_t n representa el numero de elementos que se va a modificar del
// arreglo, tambien esta directamente relacionado con la cantidad de memoria
// en bytes que va a modificar. Es decir si voy a trabajar con 
// caracteres sabemos que cada caracter pesa 1 byte, entonces si queremos
// rellenar 5 elementos del arreglo se debe multiplicar por los bytes(5*1).
// En el caso de los enteros, pesan 4 bytes(5*4).
// El resultado es la cantidad de memoria que bzero va a modificar.
// La función bzero es útil cuando necesitas limpiar un bloque de memoria antes
// de usarla.