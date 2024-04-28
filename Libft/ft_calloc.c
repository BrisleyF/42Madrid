/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:33:20 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/02 21:33:26 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (size != 0 && total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}

// La función calloc se utiliza para asignar memoria dinámica similar a malloc.
// Sin embargo, a diferencia de malloc, calloc inicializa el bloque de memoria
// asignado con ceros.
// recibe 2 argumentos: 
// que toma dos argumentos: 
// - count -> que representa el número de elementos a asignar. 
// - size -> representa el tamaño de cada elemento.
// Se crea una variable (total_size) para asignar el resultado de multiplicar
// count y size.
// Se declara un puntero tipo void (*ptr) para almacenar la asignacion de
// memoria.
// Se usa una condicional con el fin de verificar si resultado de la
// multiplicación count * size sea tan grande que cause un desbordamiento de
// enteros (SIZE_MAX). Si la condicion se cumple retorna NULL.
// Si es falsa en ptr se almacena la reserva de memoria que se realiza al llamar
// la funcion malloc(cantidad de bytes a reservar).
// Si ptr es distinto a NULL se llama la funcion bzero para rellenar los
// espacios con el caracter 0.