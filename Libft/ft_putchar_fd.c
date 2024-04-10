/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:23:16 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/10 16:23:20 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_putchar_fd simplemente escribe el carácter c en el archivo
// descriptor de archivo fd. Esto puede ser útil cuando necesitas imprimir un
// solo carácter en un archivo o en la salida estándar (stdout) utilizando el
// descriptor de archivo correspondiente.
// Inclusión de archivos de cabecera:
// El código incluye el archivo de cabecera "libft.h", que contiene los
// prototipos de funciones y las definiciones de tipos necesarios para utilizar
// las funciones de la biblioteca "libft".
// Definición de la función ft_putchar_fd:
// La función ft_putchar_fd es de tipo void, lo que significa que no devuelve
// ningún valor.
// Toma dos argumentos:
// c: Un solo carácter (char) que se va a escribir en el archivo descriptor de
// archivo (fd).
// fd: Un entero (int) que representa el descriptor de archivo donde se
// escribirá el carácter.
// Escritura del carácter en el descriptor de archivo:
// Dentro del cuerpo de la función, se llama a la función write para escribir
// el carácter c en el archivo descriptor de archivo fd.
// La función write toma tres argumentos:
// fd: El descriptor de archivo donde se escribirá el carácter.
// &c: La dirección de memoria del carácter c.
// sizeof(c): El tamaño en bytes del carácter c.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
