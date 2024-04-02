/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:33:00 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/02 20:33:13 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Esencialmente, atoi() toma números en forma de texto y los convierte en
// números que la computadora puede usar para realizar cálculos.
// Es una función simple y no maneja errores, como cadenas de entradas
// inválidas.
// i se utilizará como un índice para recorrer la cadena de caracteres str.
// sign se utilizará para almacenar el signo del número (positivo o negativo).
// result es donde almacenaremos el número que vamos a convertir desde la
// cadena de caracteres.
// El primer bucle while asegura que nos posicionemos en el primer carácter
// significativo de la cadena str, ignorando cualquier espacio en blanco al
// principio. Esto es importante para que la función ft_atoi() comience a
// analizar la parte numérica de la cadena. (espacio en blanco ' ', una
// tabulación '\t', un salto de línea '\n', un retorno de carro '\r', un
// avance de página '\f' o un tabulador vertical '\v'.)
// El segundo bucle while se encarga de manejar los signos (+ y -) al
// principio del número. 
// Si str[i] es '-' o '+', estamos tratando con un signo. Luego,
// verificamos si el siguiente carácter (str[i + 1]) también es '-' o '+'.
// Si lo es, significa que hay dos signos consecutivos, lo cual no es válido
// y salimos del bucle con break.
// Si solo hay un signo, verificamos si es un signo negativo ('-'). Si es así,
// multiplicamos sign por -1, lo que cambia el signo del número.
// Incrementamos i para pasar al siguiente carácter en la cadena str.
// El tercer bucle while es responsable de convertir los caracteres numéricos
// en su valor numérico correspondiente.
// El tercer bucle se ejecuta mientras el carácter actual en la posición i de
// la cadena str sea un dígito (es decir, un carácter numérico del 0 al 9). 
// Dentro del bucle, multiplicamos el número actual (result) por 10 y le
// sumamos el valor numérico del carácter actual en str[i].
// Multiplicamos por 10 dentro del bucle para "desplazar" los dígitos hacia la
// izquierda en el número resultante. Esto se debe a cómo funcionan los números
// en base 10. Este proceso garantiza que cada dígito se coloque correctamente
// en su posición en el número resultante, y que el número completo se construya
// correctamente mientras recorremos la cadena de dígitos en la cadena str.
// La conversión de un carácter numérico ('0' al '9') a su valor numérico se
// logra restando '0' del carácter numérico. Por ejemplo, si str[i] es '5',
// entonces '5' - '0' da como resultado 5.
// Luego, incrementamos i para pasar al siguiente carácter en la cadena str.
// Esto se repite hasta que str[i] ya no sea un dígito.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			break ;
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
