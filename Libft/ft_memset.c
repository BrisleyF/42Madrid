/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:50:22 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/18 14:50:34 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la función ft_memset llena los primeros len bytes del bloque
// de memoria apuntado por b con el valor de byte c. 
// Luego devuelve un puntero al bloque de memoria modificado.
// size_t se utiliza para indicar el tamaño en bytes del bloque
// de memoria que se va a llenar. 
// Esto asegura que la función maneje de manera eficiente y 
// precisa el tamaño del bloque de memoria que se está modificando.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// La funcion memset es un puntero de tipo de dato void que en este caso si
// retorna un valor. Es una excepcion de la regla, al ser una funcion
// estandar de C, de esta manera facilita su uso.
// La funcion recibe 3 argumentos: 
// - Un puntero de tipo void que contiene la direccion de memoria de un arreglo,
// el arreglo pude estar vacio pero es necesario indicar cuantos elementos puede
// contener.
// - Una variable de tipo int que representara el caracter(ASCII) con el que
// queremos rellenar a *b.
//  - Una variable de tipo size_t len (tipo de dato entero sin signo que es lo
// suficientemente grande como para representar el tamaño máximo teórico de
// cualquier objeto en la memoria. Se utiliza en el contexto de operaciones
// relacionadas con la memoria). Este tercer argumento representar el número de
// elementos del array que se llenaran con el caracter almacenado en la
// variable c.
//
// unsigned char puede representar valores en el rango de 0 a 255. Esto asegura
// un comportamiento predecible y consistente al llenar el bloque de memoria con
// el valor 255.
// Sabiendo esto creamos una variable unsigned char	*s para asignarle el valor
// de b(direccion de memoria), ya que queremos modificar b.
// Tambien creamos una variable size_t i que va ser un contador y tiene el mismo
// tipo de dato de len, para mantener la coherencia y evitar posibles problemas
// de compatibilidad o pérdida de precisión durante la comparación y el
// incremento del contador i.
// 
// El contador se iguala a 0 y se crea un while con la sigiente condicion:
// - i tiene que ser menor a len (garantiza que el bucle continúe ejecutándose
// mientras el contador i sea menor que el tamaño del bloque de memoria len)
// Una vez que se ha llenado todo el bloque de memoria, el bucle se detiene.
// Si la condicion es verdadera se ejecuta la intruccion siguiente: 
// - Se recorre *s y se indica que en el numero de indice que se esta evaluando
// se asigne el valor de la variable c y de una vez se hace un cambio del tipo de
// dato (casteo) para tener coincistencia con el tipo de dato de *s.
// Luego se incrementa i++ para poder seguir evaluar la condicion hasta que se
// detenga el bucle.
// Devolver b o s es equivalente ya que apuntan a la misma dirección de memoria,
// que es la región de memoria modificada. 

