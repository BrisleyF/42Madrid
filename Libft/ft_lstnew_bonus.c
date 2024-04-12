/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:35:30 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/12 14:35:35 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la función ft_lstnew, se utiliza para crear un nuevo nodo en una lista
// enlazada. 
// la función ft_lstnew, que devuelve un puntero a una estructura t_list. 
// t_list probablemente está definida en libft.h y representa un nodo en una
// lista enlazada. La función toma un puntero void llamado content como
// parámetro, que es el contenido que se almacenará en el nuevo nodo.
// Dentro de la función, se declara una variable local llamada node que será
// utilizada para almacenar la dirección de memoria del nuevo nodo que será
// creado.
// Se utiliza malloc para asignar memoria dinámicamente para el nuevo nodo.
// sizeof(t_list) devuelve el tamaño en bytes de la estructura t_list, lo que
// garantiza que se reserve suficiente memoria para almacenar un nodo completo.
// El puntero devuelto por malloc se asigna a la variable node.
// Se verifica si la asignación de memoria fue exitosa. Si malloc devuelve NULL,
// significa que no se pudo asignar memoria correctamente. En ese caso, la
// función devuelve NULL, lo que indica que no se pudo crear el nuevo nodo.
// En una lista enlazada, lo que se almacena en el campo content del nodo es
// un puntero que apunta a la dirección de memoria donde se encuentra el
// contenido real. En el caso de una cadena de caracteres, por ejemplo, lo que
// se almacena en el campo content es un puntero que apunta a la primera
// posición de la cadena en la memoria.
// Cuando creas un nuevo nodo y pasas una cadena de caracteres como argumento,
// lo que realmente se almacena en el campo content del nodo es la dirección de
// memoria donde comienza la cadena, no la cadena de caracteres completa. Esto
// significa que el nodo contiene una referencia al contenido en lugar de los
// caracteres en sí mismos.
// Por lo tanto, el tamaño del nodo (sizeof(t_list)) sigue siendo constante e
// independiente del tamaño del contenido que se almacena en él. El contenido 
//real se almacena en la memoria por separado, y el campo content del nodo
// simplemente apunta a esa ubicación de memoria.
// `node -> content = content`:
// node: es un puntero que apunta al nodo que estamos creando o modificando en
// ese momento.
// ->: es el operador de acceso a miembros de una estructura a través de un
// puntero. En este caso, node->content significa "acceder al campo content
// del nodo al que apunta node".
// content: es la variable que se pasa como argumento a la función
// El puntero next del nuevo nodo se establece en NULL, indicando que este nodo
// es el último de la lista enlazada.
// En resumen, la función ft_lstnew crea y devuelve un nuevo nodo en una lista
// enlazada, inicializado con el contenido proporcionado. Si la asignación de
// memoria falla, la función devuelve NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (0);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
