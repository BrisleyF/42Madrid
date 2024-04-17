/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:30:05 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/17 14:30:08 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstclear es una función que se utiliza para limpiar una lista enlazada,
// es decir, eliminar todos sus nodos y liberar la memoria que ocupaban.
// void (*del)(void*) en el parámetro del indica que ft_lstclear espera como
// argumento una función que puede eliminar el contenido de un nodo de la lista.
// Esto es útil cuando la lista contiene datos dinámicos (por ejemplo, cadenas
// de caracteres) y necesitamos liberar la memoria asignada a esos datos.
// Entonces, al llamar a ft_lstclear, pasamos como argumento una función que
// sabe cómo liberar la memoria asociada al contenido de un nodo de la lista.
// Esta función se aplicará a cada nodo de la lista antes de eliminarlo,
// asegurando que no se pierda memoria y evitando posibles fugas de memoria.
// void: Indica que la función ft_lstclear no devuelve ningún valor.
// ft_lstclear: Nombre de la función.
// t_list **lst: Primer parámetro de la función, un puntero a un puntero a la
// estructura t_list. Esto significa que la función recibirá una referencia al
// puntero que apunta al primer nodo de la lista.
// void (*del)(void*): Segundo parámetro, un puntero a una función que toma un
// argumento de tipo void* y no devuelve nada. Esta función será utilizada para
// eliminar el contenido de cada nodo de la lista.
// Se declara una variable local de tipo t_list* llamada temp. Esta variable
// se utilizará para almacenar temporalmente el siguiente nodo de la lista
// mientras se elimina el nodo actual.
// Se verifica si alguno de los parámetros pasados a la función es nulo.
// Si lst o del son nulos, la función retorna sin hacer nada.
// El bucle while se ejecuta mientras el puntero *lst no sea nulo, es decir,
// mientras haya nodos en la lista.
// Se guarda el puntero al siguiente nodo en temporal.
// Se llama a la función ft_lstdelone para eliminar el nodo actual y liberar
// la memoria asociada a su contenido, utilizando la función de eliminación del.
// Se actualiza el puntero al primer elemento de la lista *lst para apuntar al
// siguiente nodo (temporal), preparándose para eliminar el siguiente nodo en
// la siguiente iteración.
// Finalmente, se asigna NULL al puntero *lst para indicar que la lista está
// vacía.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = 0;
}
