/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:19:20 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/23 18:19:37 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Se utiliza para buscar la primera aparición de un carácter específico en
// una cadena de caracteres (string).
// Utiliza un bucle while para iterar sobre los caracteres de la cadena s
// hasta que encuentre el carácter nulo '\0'.
// Dentro del bucle, verifica si el carácter en la posición actual (s[i])
// coincide con el carácter buscado (c). Si coincide, asigna un puntero a esa
// posición de memoria en la cadena a la variable ret
// Después del bucle, si el carácter buscado c es el carácter nulo '\0',
// actualiza ret para que apunte al final de la cadena s.
// Finalmente, devuelve el valor de ret, que será un puntero al carácter
// encontrado en la cadena, o NULL si el carácter no se encuentra.
// Aquí, (char)c convierte explícitamente el entero c al tipo de datos
// char. Esto es necesario para asegurar que se realice una comparación
// válida entre el carácter en la posición actual de la cadena s y el
// carácter buscado c.
// En resumen, se cambia el tipo de variable a char en ciertas partes
// del código para asegurar que las comparaciones y asignaciones se
// realicen correctamente con respecto a los caracteres en la cadena.
// Cuando se encuentran varias letras iguales en una cadena y se utiliza
// la función ft_strchr para buscar un carácter específico, la función
// devolverá la posición de la primera ocurrencia de ese carácter en la
// cadena.
// Al añadir break dentro del condicional que encuentra la primera
// ocurrencia del carácter c, el bucle se detendrá y ret se asignará a
// la posición de la primera ocurrencia encontrada.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*ret;
	
	i = 0;
	ret = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ret = (char *)(s + i);
            break;
		}
		i++;
	}
	if (c == '\0')
		ret = (char *)(s + i);
	return (ret);
}