/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:07:08 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/10 20:07:14 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_putnbr_fd convierte el número entero n en una cadena de
// caracteres y luego escribe esa cadena en el archivo descriptor de archivo fd.
// Conversión del número a un valor long:
// En primer lugar, el número entero n se convierte a un tipo long para evitar
// posibles desbordamientos en el caso de números muy grandes. Se realiza esta
// conversión asignando el valor de n a la variable number.
// Manejo del signo negativo:
// Se verifica si el número number es negativo (number < 0). Si es así, se
// escribe el carácter '-' en el archivo descriptor de archivo fd para indicar
// el signo negativo. Luego, se cambia el signo de number a positivo
// multiplicándolo por -1.
// Recursión para escribir cada dígito:
// Después de manejar el signo, se verifica si el número number es mayor que 9
// (number > 9). Si es así, significa que el número tiene más de un dígito.
// En ese caso, se realiza una llamada recursiva a ft_putnbr_fd dividiendo
// number por 10 para escribir el dígito más significativo primero.
// Luego, se utiliza ft_putchar_fd para escribir el dígito menos significativo.
// Esto se hace sumando '0' al residuo de la división de number por 10. Esto
// convierte el dígito (que está representado como un número entre 0 y 9) en
// su correspondiente carácter ASCII.
// Escritura del último dígito (caso base):
// Si el número number es menor o igual a 9, significa que solo tiene un dígito.
// En este caso, se utiliza ft_putchar_fd para escribir este dígito en el
// archivo descriptor de archivo fd.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('0' + number % 10, fd);
	}
	else
		ft_putchar_fd('0' + number, fd);
}
