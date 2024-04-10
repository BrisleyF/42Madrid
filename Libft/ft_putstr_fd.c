/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:37:51 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/10 16:37:56 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_putstr_fd simplemente escribe la cadena de caracteres s en el
// archivo descriptor de archivo fd. Esto puede ser útil cuando necesitas
// imprimir una cadena en un archivo o en la salida estándar (stdout)
// utilizando el descriptor de archivo correspondiente.
// Comprobación de la cadena nula:
// La función comienza con una comprobación para asegurarse de que la cadena s
// no sea nula. Si s es nulo, significa que no hay nada que escribir, por lo
// que la función simplemente retorna sin hacer nada.
// Iteración sobre la cadena de caracteres:
// Después de la comprobación de la cadena nula, la función inicializa un
// contador i en 0.
// Luego, comienza un bucle while que se ejecuta mientras el carácter actual
// de s[i] no sea el carácter nulo de terminación ('\0'), que indica el final
// de la cadena.
// Dentro del bucle, la función llama a la función write para escribir el
// carácter actual s[i] en el archivo descriptor de archivo fd.
// La función write toma tres argumentos:
// fd: El descriptor de archivo donde se escribirá el carácter.
// &s[i]: La dirección de memoria del carácter s[i].
// sizeof(s[i]): El tamaño en bytes del carácter s[i].
// Incremento del contador:
// Después de escribir el carácter actual, el contador i se incrementa para
// pasar al siguiente carácter en la cadena s.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
}
