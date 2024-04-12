/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:26:07 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/17 14:29:43 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char	*str);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);

#endif

// La palabra clave struct en C se utiliza para definir una estructura de
// datos. Una estructura en C es una colección de variables de diferentes
// tipos agrupadas bajo un mismo nombre.
// La palabra clave struct nos indica que estamos definiendo una estructura
// de datos en general, y la estructura de la lista se especifica mediante
// la definición de los miembros particulares (content y next) que son
// relevantes para representar un nodo en una lista enlazada.
// `typedef` es una palabra clave en C que se utiliza para crear alias o
// nombres alternativos para tipos de datos existentes. Es una forma
// conveniente de dar nombres más cortos y significativos a tipos de datos
// complejos o largos.
// La palabra clave typedef se utiliza para definir un nuevo tipo de dato
// llamado t_list, que es un alias para la estructura struct s_list. 
// `void *content`: Este es un puntero void que puede apuntar a cualquier tipo
// de dato, ya que void * es un puntero genérico en C. Este miembro se utiliza
// para almacenar el contenido del nodo de la lista. Puede contener un puntero
// a cualquier tipo de dato, y es responsabilidad del programador asegurarse
// de que el contenido se interprete correctamente.
// `struct s_list *next`: Este es un puntero que apunta al siguiente nodo en la
// lista enlazada. Es de tipo struct s_list *, lo que significa que apunta a
// otra estructura del mismo tipo (es decir, a otro nodo en la lista). Si next
// es NULL, significa que este nodo es el último de la lista.
//   Este tipo de estructura de datos es útil cuando necesitas almacenar una
// secuencia de elementos y quieres poder agregar o eliminar elementos de manera
// eficiente. La flexibilidad de la lista enlazada permite inserciones y
// eliminaciones eficientes en cualquier punto de la lista.
// Entonces, en términos generales, un nodo en una lista enlazada es una
// estructura que contiene datos y una referencia al siguiente nodo en la
// lista. La lista en sí misma está compuesta por una secuencia de estos nodos,
// donde cada nodo está vinculado al siguiente nodo mediante los punteros next.