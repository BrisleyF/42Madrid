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

// La función calloc se utiliza para asignar memoria dinámica para un arreglo
// de elementos, similar a malloc. Sin embargo, a diferencia de malloc, calloc
// inicializa el bloque de memoria asignado con ceros.
// Se define la función ft_calloc, que toma dos argumentos: count, que
// representa el número de elementos a asignar, y size, que representa el tamaño
// de cada elemento.
// Se declaran dos variables locales: total_size, que almacenará el tamaño total
// necesario para la asignación de memoria, y ptr, que será un puntero para la
// memoria asignada.
// Se calcula el tamaño total necesario para la asignación de memoria
// multiplicando el número de elementos (count) por el tamaño de cada elemento
// (size).
// Se realiza una verificación para detectar desbordamiento de enteros. Esto se
// hace verificando si el tamaño de cada elemento (size) es diferente de cero y
// si la división del tamaño total (total_size) entre el tamaño de cada elemento
// (size) no es igual al número de elementos (count). Si esta condición se
// cumple, indica que ha ocurrido un desbordamiento de enteros, lo que significa
// que el tamaño total es mayor de lo que se puede representar. En tal caso, la
// función devuelve NULL para indicar un fallo en la asignación de memoria.
// Se asigna memoria dinámica utilizando malloc, reservando un bloque de memoria
// del tamaño especificado por total_size.
// Se verifica si la asignación de memoria ha sido exitosa (ptr != NULL). Si la
// asignación es exitosa, se utiliza ft_bzero para inicializar la memoria
// asignada con ceros.
// Finalmente, la función devuelve el puntero a la memoria asignada. Si la
// asignación de memoria falló, este puntero será NULL.

#include "libft.h"
#include <errno.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (size != 0 && total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, count);
	else
		errno = ENOMEM;
	return (ptr);
	free(ptr);
}
