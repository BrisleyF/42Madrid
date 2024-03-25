/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:52:23 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/24 16:52:28 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función strncmp en C se utiliza para comparar los primeros n caracteres
// de dos cadenas de caracteres (string1 y string2). La comparación se realiza
// de manera lexicográfica, es decir, carácter por carácter, teniendo en cuenta
// los valores ASCII de los caracteres.
// string1 y string2: Son punteros a las cadenas que se van a comparar.
// n: Es el número máximo de caracteres que se compararán en las cadenas.
// La función strncmp compara los primeros n caracteres de string1 y string2.
// Devuelve un valor entero que indica la relación entre las cadenas:
// Devuelve un valor menor que cero si string1 es menor que string2.
// Devuelve cero si string1 es igual a string2.
// Devuelve un valor mayor que cero si string1 es mayor que string2.
// En resumen, "(int)((unsigned char)s1[i] - (unsigned char)s2[i])" calcula
// la diferencia entre los valores ASCII de los caracteres en las posiciones
// i de las cadenas s1 y s2, y almacena este resultado como un entero en la
// variable ret. Este valor entero se utiliza luego para determinar el orden
// lexicográfico de las cadenas en la función ft_strncmp.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			ret = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
			break ;
		}
		i++;
	}
	return (ret);
}
