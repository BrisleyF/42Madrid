/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:31:07 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/17 15:31:11 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_lstiter se utiliza en C para iterar sobre cada nodo de una
// lista enlazada y aplicar una función a cada elemento de la lista.
// ft_lstiter es el nombre de la función.
// t_list *lst es el primer nodo de la lista que se va a iterar.
// void (*f)(void *) es un puntero a una función que toma un argumento de tipo
// void* y no devuelve nada. Esta función se aplica a cada elemento de la lista.
// La función ft_lstiter recorre cada nodo de la lista comenzando desde el nodo
// especificado por lst. En cada iteración, llama a la función f y pasa el
// contenido del nodo actual como argumento. Esto permite realizar operaciones
// específicas en cada elemento de la lista.
// Se verifica si el puntero a la función f no es nulo. Si f es nulo, significa
// que no se proporcionó ninguna función para aplicar a los elementos de la
// lista, por lo que no hay nada que hacer. En ese caso, la función retorna
// sin realizar ninguna operación.
// Se inicia un bucle while que se ejecuta mientras lst no sea nulo, es decir,
// mientras haya nodos en la lista.
// En cada iteración del bucle, se llama a la función f y se le pasa el
/// contenido del nodo actual (lst->content) como argumento.
// Luego, se actualiza lst para que apunte al siguiente nodo en la lista
// (lst->next), preparándose para iterar sobre el siguiente nodo en la
// siguiente iteración.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			f(lst -> content);
			lst = lst -> next;
		}
	}
}
