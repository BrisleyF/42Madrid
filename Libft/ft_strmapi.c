/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:27:49 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/09 19:27:51 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la función ft_strmapi que toma una cadena de caracteres s y una función f,
// y aplica la función f a cada carácter de la cadena s junto con su índice
// correspondiente. Luego, crea y devuelve una nueva cadena que contiene los
// resultados de aplicar la función f a cada carácter.
// Inicialización de variables:
// i: Se inicializa en 0. Este será el índice que se utilizará para recorrer
// la cadena de entrada s.
// res: Es el puntero donde se almacenará la nueva cadena resultante.
// Comprobación de parámetros nulos:
// Se verifica si los parámetros s y f son nulos. Si cualquiera de ellos es
// nulo,la función devuelve un puntero nulo (NULL), indicando un error o una
// operación no válida.
// Asignación de memoria para la nueva cadena:
// Se asigna memoria dinámicamente para la nueva cadena res utilizando la
// función malloc. La longitud de la nueva cadena será igual a la longitud
// de la cadenande entrada s más 1 (para el carácter nulo de terminación \0).
// Se utiliza ft_strlen(s) para obtener la longitud de la cadena s.
// Aplicación de la función a cada carácter:
// Se itera sobre cada carácter de la cadena de entrada s utilizando un bucle
// while que se ejecuta mientras s[i] no sea el carácter nulo de terminación
// \0.
// En cada iteración, se aplica la función f al carácter s[i] junto con su
// índice i, y se asigna el resultado a res[i].
// Añadiendo el carácter nulo de terminación:
// Después del bucle, se agrega el carácter nulo de terminación \0 al final
// de la nueva cadena res para indicar el final de la cadena.
// Retorno de la nueva cadena:
// Finalmente, se devuelve el puntero res, que apunta a la nueva cadena que
// contiene los resultados de aplicar la función f a cada carácter de la
// cadena s junto con su índice.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (0);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
