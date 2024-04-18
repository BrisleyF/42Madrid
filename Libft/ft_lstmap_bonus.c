/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:20:06 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/18 14:20:11 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo.
// Crea una lista resultante de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido
// de un nodo, si hace falta.
// Se define la función ft_lstmap, que toma tres argumentos:
// lst: Un puntero al primer elemento de la lista enlazada original.
// f: Un puntero a una función que se aplicará a cada elemento de la lista.
// Esta función toma un puntero a void como argumento y devuelve un puntero
// a void.
// del: Un puntero a una función que se utilizará para liberar la memoria
// asignada a cada elemento de la nueva lista, si es necesario.
// Se verifica si alguno de los punteros lst, f o del es nulo. Si alguno de
// ellos es nulo, la función devuelve NULL, lo que indica un error.
// Se declaran variables locales para almacenar un elemento de la nueva lista
// (element), la lista nueva (new) y el contenido transformado (content) de
// cada elemento de la lista original.
// Se inicia un bucle while que recorre la lista original (lst). El bucle se
// ejecuta mientras lst no sea nulo, es decir, mientras haya elementos en la
// lista original por procesar.
// Se aplica la función f al contenido del elemento actual de la lista original
// (lst -> content) y se guarda el resultado en la variable content.
// Se crea un nuevo elemento de lista (element) utilizando la función
// ft_lstnew, pasando el contenido transformado (content) como argumento.
// Si la creación del nuevo elemento (element) falla (es decir, si ft_lstnew 
// devuelve NULL), se libera la memoria asignada a content, se limpia la lista 
// new utilizando la función ft_lstclear y se devuelve NULL, indicando un error.
// Se añade el nuevo elemento (element) al final de la lista nueva (new)
// utilizando la función ft_lstadd_back.
// Se avanza al siguiente elemento de la lista original (lst -> next) para
// continuar el bucle y procesar el siguiente elemento.
// Una vez que se han procesado todos los elementos de la lista original y se
// han añadido a la lista nueva, se devuelve un puntero al primer elemento de
// la lista nueva.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*content;
	t_list	*element;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst -> content);
		element = ft_lstnew(content);
		if (!element)
		{
			free(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, element);
		lst = lst -> next;
	}
	return (new);
}

// no necesitas asignar memoria directamente a la lista new antes de usarla.
// La memoria se asigna dinámicamente cuando se crean y agregan elementos a la
// lista.
// Como la lista enlazada se compone de estos nodos enlazados entre sí, no es
// necesario asignar memoria específicamente para la lista en sí misma. La lista
// se construye agregando nodos uno tras otro, y la asignación de memoria para
// cada nodo proporciona la estructura subyacente para la lista en su conjunto.
// Como el objetivo es usar la funcion "f" en cada nodo que contenga la lista
// que recibimos como argumento, lo que hacemos es:
// en la variable "content" guardamos el resultado de acceder al contenido del
// nodo actual.
// Luego necesitamos craer un nuevo nodo con el contenido al que acabamos de
// acceder, para eso: 
// En "element" guardamos el resultado de llamar a la funcion ft_lstnew
// pasandole como argumento la variable "content".
// Hacemos una condicion preguntando si el nodo "element" es nulo lo que
// querria decir no se creo el nodo correctamente. Si la condicion se cumple,
// se liberará la memoria asignada a content, se limpiará la lista new y se
// devolverá NULL, indicando un error.
// Si el nodo se creo de manera correcta, se añade el nuevo nodo (element) al
// final de la lista nueva (new) utilizando la función ft_lstadd_back.
// Se avanza al siguiente elemento de la lista original (lst->next) para
// continuar el bucle y procesar el siguiente elemento.
// finalmente se devuelve un puntero al primer nodo de la lista nueva.