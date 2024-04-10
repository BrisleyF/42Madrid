/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:07:41 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/09 20:08:02 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_striteri modifica la cadena original aplicando una función a cada
// carácter de la misma.
// Inicialización de variables:
// Se inicializa la variable i como un contador de tipo unsigned int, que se
// utilizará como índice para recorrer la cadena s.
// Comprobación de punteros nulos:
// Se verifica si los punteros s y f no son nulos. Si cualquiera de ellos es
// nulo, la función termina su ejecución sin hacer nada.
// Iteración sobre la cadena de caracteres:
// Se inicia un bucle while que se ejecuta mientras el carácter actual de s[i]
// no sea el carácter nulo de terminación ('\0').
// En cada iteración, se llama a la función f pasando como argumentos el índice
// i y la dirección del carácter s[i].
// La dirección del carácter s[i] se pasa a f para que la función f pueda
// modificar el carácter original si es necesario.
// Incremento del índice:
// Después de llamar a la función f, se incrementa el índice i para pasar al
// siguiente carácter en la cadena s.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
