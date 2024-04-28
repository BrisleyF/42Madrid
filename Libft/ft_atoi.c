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

// La funcion ft_atoi es de tipo int. Recibe una cadena de caracteres, donde
// buscara si el texto contiene un digito y lo convertira en un numero entero.
// Se usan 3 variables:
// - int i -> contador, se inicializa en 0.
// - int sign -> se almacena el signo y se inicializa en 1.
// -  unsigned long result -> se almacena el resultado y se inicializa en 0.
// while 1 -> Se busca ignorar espacio en blanco ' ', una
// tabulación '\t', un salto de línea '\n', un retorno de carro '\r', un
// avance de página '\f' o un tabulador vertical '\v'.
// Esto es importante para que la función ft_atoi() comience a analizar la
// parte numérica de la cadena.
// true while 1 -> incrementar i++ para avanzar hasta encontrar otro caracter.
// false while 1 -> pregunta la condicion del segundo while.
// while 2 -> se encarga de manejar los signos (+ y -) al principio del número.
// true while 2 -> 
// 1) if(se pregunta si el caracter siguiente tambien tiene un
// signo)
// true if 1 -> sale de la condicional con un break.
// false if 1 -> 
// 2) if(si el caracter a evaluar tiene un signo -)
// true if 2 -> se multiplica el valor de la variable sing por -1.
// false if 2 -> en caso de que no sea negativo, solo se incrementa i++ con el
// fin de seguir evaluando los signos de los demas caracteres.
// false while 2 -> En caso de no encontrar ningun signo o ya almacenar el
// signo - en la variable sing. Se pregunta la condicion del tercer while.
// while 3 -> Si encontramos digitos del 0 al 9
// true while 3 -> multiplicamos el número actual (result) por 10 y le sumamos
// el valor numérico del carácter actual en str[i].
// str[i] - '0' -> Por ejemplo, si str[i] es '5', entonces '5' - '0' da como
// resultado 5.
// Despues de almacenar el resultado (result), se incrementa i++ para hacer lo
// mismo con el resto de digitos.
// false while 3 -> Si no encuenta digitos, retorna sign * result.