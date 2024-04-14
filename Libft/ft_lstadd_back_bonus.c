/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 12:24:07 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/14 12:24:21 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Añade el nodo ’new’ al final de la lista ’lst’.
// Encabezado de función: El encabezado de la función indica que toma dos
// argumentos: t_list **lst, que es un puntero a un puntero al primer elemento
// de la lista, y t_list *new, que es el nodo que se va a agregar al final de
// la lista.
// Comprobación de nuevo nodo: La función primero comprueba si el nodo new es
// NULL. Si lo es, significa que no hay ningún nodo para agregar, por lo que la
// función simplemente sale sin hacer nada.
// Comprobación de la lista: Luego, la función comprueba si la lista está
// vacía, es decir, si el puntero al primer elemento (*lst) es NULL. Si la
// lista está vacía, simplemente establece el puntero al primer elemento (*lst)
// en el nuevo nodo new. Esto significa que new se convierte en el único nodo
// en la lista.
// Recorrido de la lista para encontrar el último nodo: Si la lista no está
// vacía, la función necesita encontrar el último nodo en la lista actual.
// Para hacer esto, asigna el puntero al primer elemento (*lst) a una variable
// llamada current. Luego, utiliza un bucle while para recorrer la lista hasta
// que encuentre un nodo cuyo puntero next sea NULL. Esto significa que ha
// llegado al último nodo de la lista.
// Añadir el nuevo nodo al final de la lista: Una vez que se encuentra el
// último nodo (current), la función establece el puntero next del último
// nodo en el nuevo nodo new. Esto conecta el nuevo nodo al final de la lista.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current -> next != NULL)
			current = current -> next;
		current -> next = new;
	}
}
