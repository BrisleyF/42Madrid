/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:49:09 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/13 12:49:11 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstadd_front: Añade el nodo ’new’ al principio de la lista ’lst’
// t_list **lst: Un puntero a un puntero de tipo t_list. Esto significa que se
// espera que el argumento sea un puntero que apunte a una lista enlazada. El
// puntero doble se usa para poder modificar el puntero que apunta al comienzo
// de la lista si es necesario.
// t_list *new: Un puntero a un nodo que se va a agregar al principio de la
// lista.
// if (new != NULL): Esta línea verifica si el puntero new no es nulo. Es una
// verificación de seguridad para asegurarse de que no estamos intentando
// agregar un nodo nulo a la lista.
// new -> next = *lst;: Aquí, el puntero next del nuevo nodo se establece en lo
// que el puntero lst actualmente apunta. Esto significa que el nuevo nodo
// apunta al nodo que actualmente es el primero en la lista.
// *lst = new;: Después de actualizar el puntero next del nuevo nodo, se
// actualiza el puntero lst para que apunte al nuevo nodo. Esto coloca al nuevo
// nodo al principio de la lista.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
