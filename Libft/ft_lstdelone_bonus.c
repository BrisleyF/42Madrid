/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:40:57 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/14 17:41:14 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Toma como parámetro un nodo ’lst’ y libera la memoria del contenido
// utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
// La memoria de ’next’ no debe liberarse.
// La función ft_lstdelone toma dos parámetros:
// lst: un puntero al nodo que se va a eliminar.
// del: un puntero a una función que se utilizará para liberar la memoria
// asignada al contenido del nodo. Si del es NULL, la función no realizará
// ninguna operación en el contenido del nodo.
// void (*del)(void*) declara un puntero a una función que no devuelve ningún
// valor y acepta un parámetro de tipo puntero void*. Este tipo de sintaxis
// es comúnmente utilizada en C para pasar funciones como argumentos a otras
// funciones.
// Dentro de la función ft_lstdelone, se realiza lo siguiente:
// Se comprueba si el nodo no es NULL. Si lst es NULL, significa que no hay
// ningún nodo que eliminar, por lo que la función sale sin hacer nada.
// Se aplica la función de eliminación (del) al contenido del nodo utilizando
// lst->content. Esto es útil si el contenido del nodo fue asignado
// dinámicamente y necesita ser liberado para evitar fugas de memoria.
// Se libera la memoria asignada al nodo utilizando free(lst). Esto elimina el
// propio nodo de la memoria.
// cuando pasas &free como argumento a ft_lstdelone, estás pasando la dirección
// de memoria de la función free, lo que permite que ft_lstdelone la llame más
// tarde cuando sea necesario liberar la memoria asignada al contenido del nodo.
// Sin el operador &, estarías pasando el valor de retorno de free, lo cual no
// es lo que necesitas aquí.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del (lst -> content);
		free(lst);
	}
}
