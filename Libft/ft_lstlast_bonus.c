/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:42:57 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/13 17:43:00 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_lstlast se utiliza para encontrar el último nodo de una lista
// enlazada. 
// lst = lst->next; es una forma de avanzar en la lista enlazada, moviendo el
// puntero lst al siguiente nodo en la secuencia. Esta instrucción se usa
// comúnmente en bucles mientras se recorre una lista enlazada para visitar
// cada nodo en la lista.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
