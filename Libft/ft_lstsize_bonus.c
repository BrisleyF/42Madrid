/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:13:58 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/13 17:14:03 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_lstsize calcula el tamaño de una lista enlazada, es decir,
// cuenta cuántos elementos hay en la lista. 
// int ft_lstsize(t_list *lst): Esta es la declaración de la función
// ft_lstsize. Toma un puntero a la cabeza de la lista (lst) como argumento y
// devuelve un entero que representa el número de nodos en la lista.
// int counter = 0;: Se inicializa una variable counter con el valor 0. Esta
// variable se usará para contar el número de nodos en la lista.
// while (lst != NULL) { ... }: Se inicia un bucle while que se ejecuta
// mientras el puntero lst no sea nulo. Esto significa que el bucle continuará
// hasta que lst llegue al final de la lista, es decir, cuando apunte a NULL.
// lst = lst -> next;: En cada iteración del bucle, el puntero lst se actualiza
// para que apunte al siguiente nodo en la lista. Esto se hace moviendo lst al
// siguiente nodo usando el puntero next de la estructura t_list.
// counter++;: Se incrementa el contador en uno en cada iteración del bucle.
// Esto cuenta el nodo actual en la lista.
// return (counter);: Una vez que el bucle ha recorrido toda la lista, la
// función devuelve el valor del contador, que representa el número total de
// nodos en la lista.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		counter++;
	}
	return (counter);
}
