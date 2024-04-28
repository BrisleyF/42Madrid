/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:46:40 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/06 16:46:44 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_itoa toma como argumento un número entero y devuelve un
// puntero a una cadena de caracteres que representa ese número. Por ejemplo,
// si se pasa el número entero 123 a ft_itoa, la función devolverá una cadena
// de caracteres que contiene los caracteres '1', '2', '3', seguidos de un
// carácter nulo '\0' que indica el final de la cadena.
//
// La función ft_base se utiliza en la función ft_itoa para calcular la
// potencia de 10 necesaria para determinar el número de dígitos en el entero
// dado. Su propósito principal es ayudar en la determinación del número de
// dígitos, lo que es crucial para reservar memoria suficiente para la cadena
// de caracteres que contendrá la representación del número entero.
// El operador -- es el operador de decremento, el valor de exp se decrementa
// en cada iteración del bucle, y el bucle se detiene cuando exp alcanza cero. 
// Si exp es igual a 0 retorna 1, ya que cualquier numero elevado a la 0 es
// igual a 1.
// Ejemplo 1:
// base = 2
// exp = 3
// value = 0
// long int result = ft_base(2, 3, &value);
// Se espera que result sea 2^3 = 8
// Después de la llamada, value se actualiza a 1
//
// función ft_itoa:
// Inicialización de variables:
// digit: Se inicializa en 1. Esta variable se utilizará para contar el número
// de dígitos en el número entero n.
// number: Esta variable será un puntero a la cadena de caracteres que
// representará el número entero.
// value: Se inicializa para determinar si n es positivo o negativo.
// Cálculo del número de dígitos:
// Se inicia un bucle while que se ejecuta mientras n dividido por la potencia
// de 10 correspondiente a digit sea diferente de cero.
// Dentro del bucle, se incrementa digit para contar el número de dígitos
// necesarios para representar n.
// Manejo del caso de números negativos:
// Si n es negativo, se establece value en -1 y se incrementa digit para dejar
// espacio para el signo negativo.
// Esto asegura que ft_base genere la potencia correcta de 10 para el número de
// dígitos, incluyendo el signo negativo.
// Asignación de memoria para la cadena number:
// Se asigna memoria para la cadena number utilizando la función ft_calloc.
// La cantidad de memoria asignada es digit + 1 para incluir espacio para el
// carácter nulo de terminación de cadena ('\0').
// Conversión de dígitos a caracteres:
// Se inicia un bucle while que se ejecuta digit - 1 veces.
// Dentro del bucle, se convierte el último dígito de n en un carácter y se
// almacena en la posición correspondiente de number.
// Se realiza la conversión multiplicando el valor del dígito por value
// (que es -1 si n es negativo) y sumando '0' para obtener el carácter ASCII
// correspondiente.
// Se divide n por 10 para pasar al siguiente dígito.
// Manejo del último dígito:
// Después del bucle, si value es 1 (indicando que n es positivo), se almacena
// el último dígito en la posición digit de number.
// Si value es -1 (indicando que n es negativo), se coloca el signo negativo en
// la primera posición de number.
// Retorno de la cadena number:
// Se devuelve la cadena number, que ahora contiene la representación de cadena
// del número entero n, incluido el signo si es negativo.

#include "libft.h"

static long int	ft_base(long int base, size_t exp, int *value)
{
	long int	number;

	*value = 1;
	if (exp == 0)
		return (1);
	number = base;
	while (--exp)
		number *= base;
	return (number);
}

char	*ft_itoa(int n)
{
	int		value;
	size_t	digit;
	char	*number;

	digit = 1;
	while (n / ft_base(10, digit, &value))
		digit++;
	if (n < 0)
	{
		value = -1;
		digit++;
	}
	number = (char *)ft_calloc(digit + 1, sizeof(char));
	if (!number)
		return (0);
	while (--digit)
	{
		number[digit] = (char)(value * (n % 10) + '0');
		n /= 10;
	}
	if (value == 1)
		number[digit] = (char)((n % 10) + '0');
	else
		number[0] = '-';
	return (number);
}
