/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:49:42 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/17 18:49:46 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
/*
	1) ftisalpha:
    printf("El resultado: %d\n", ft_isalpha(38));

    2) ftisdigit:
    int result;
    result = ft_isdigit(50);
    printf("El resultado: %d\n", result);
    
    3) ft_isalnum:
    printf("El resultado: %d\n", ft_isalnum(' '));

    4) ft_isascii:
    printf("El resultado: %d\n", ft_isascii(128));

    5) ft_isprint:
    printf("El resultado: %d\n", ft_isprint(198));

    6) ft_strlen:
    char *c = "hola";
    printf("El resultado: %zu\n", ft_strlen("holaaa1234"));

    7) ft_memset:
    char buffer[40];
    ft_memset(buffer, 'X', 2);
    printf("El resultado: %s\n", buffer);
 
    8) ft_bzero:
    char buffer[10]; // Creamos un buffer de 10 bytes
    // Llenamos el buffer con caracteres no nulos
    strcpy(buffer, "hello");
    // Imprimimos el contenido original del buffer
    printf("Contenido original del buffer: %s\n", buffer);
    // Llamamos a ft_bzero para establecer los primeros 5 bytes del buffer a cero
    ft_bzero(buffer, 5);
    // Verificamos si se asignaron correctamente los ceros
    int i = 0;
    while (i < 5 && buffer[i] == '\0') {
        i++;
    }
    if (i == 5) {
        printf("Todos los bytes se han establecido correctamente en cero.\n");
    } else {
        printf("Error: El byte en la posición %d no es cero.\n", i);
    }

    9) ft_memcpy:
    // sizeof es un operador, sizeof(src) se utiliza para obtener el tamaño en bytes del arreglo src.
    char dest[20];
    char src[] = "hola";
    ft_memcpy(dest, src, sizeof(src));
    printf("Contenido de dst después de la copia: %s\n", dest);

    10) ft_memmove:
    char buffer[20] = "Hola, mundo!"; // Área de memoria de destino
    char *src = buffer + 5; // Copia desde la posicion de memoria 5 en la cadena de origen y guardalos en la direccion de memoria apuntada por dest.
    printf("Antes de copiar:\n");
    printf("buffer (destino): %s\n", buffer);
    printf("src (origen): %s\n", src);
    ft_memmove(buffer, src, strlen(src) + 1); // Copiar desde src a buffer,  strlen(src): contar los caracteres de src (incluyendo el carácter nulo)
    printf("\nDespués de copiar:\n");
    printf("buffer (destino): %s\n", buffer);
    printf("src (origen): %s\n", src);

    11) ft_strlcpy:
    char src[] = "papas fritas";
    char dst[20]; // Tamaño del búfer de destino
    size_t copied_len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la cadena copiada: %zu\n", copied_len);

    12) ft_strlcat:
    char dest[20] = "Hello, ";
    const char *src = "World! How are you?";
    size_t dstsize = sizeof(dest); // Tamaño máximo del búfer de destino
    // Llamada a la función ft_strlcat
    size_t result_len = ft_strlcat(dest, src, dstsize);
    // Imprimimos la cadena concatenada y su longitud
    printf("Cadena concatenada: %s\n", dest);
    printf("Longitud de la cadena concatenada: %zu\n", result_len);

    13) ft_toupper:
    char c = 'a';
    printf("%c convertido a mayúscula es: %c\n", c, ft_toupper(c));

    14) ft_tolower:
    char c = 'A';
    printf("%c convertido a minúscula es: %c\n", c, ft_tolower(c));

    15) ft_strchr: 
    const char *str = "Hello, World!";
    char *ptr;
    int c = 'l';
    ptr = ft_strchr(str, c);
    if (ptr != NULL) {
        printf("El carácter '%c' se encuentra en la posición: %ld\n", c, ptr - str);
        // En el contexto de este ejemplo, ptr apunta al carácter encontrado en la cadena str 
        // (la última ocurrencia del carácter buscado), y str apunta al inicio de la cadena. 
        // Entonces, ptr - str dará como resultado la posición del carácter encontrado en la cadena,
        // que es la diferencia en el número de caracteres entre el inicio de la cadena y la posición del carácter encontrado.
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", c);
    }

    16) ft_strrchr: 
    const char *str = "Hello, World!";
    char *ptr;
    int c = 'o';
    ptr = ft_strrchr(str, c);
    if (ptr != NULL) {
        printf("El carácter '%c' se encuentra en la posición: %ld\n", c, ptr - str);
    } else {
        printf("El carácter '%c' no se encuentra en la cadena.\n", c);
    }
*/

    // 17) ft_strncmp:
     const char *str1 = "corazonnnn";
    const char *str2 = "corazon";
    int result;
    // Comparación de los primeros 3 caracteres de str1 y str2
    result = ft_strncmp(str1, str2, 3);
    if (result < 0) {
        printf("'%s' es menor que '%s'\n", str1, str2);
        printf("El resultado: '%d'\n", result);
    } else if (result == 0) {
        printf("'%s' es igual a '%s'\n", str1, str2);
        printf("El resultado: '%d'\n", result);
    } else {
        printf("'%s' es mayor que '%s'\n", str1, str2);
        printf("El resultado: '%d'\n", result);
    }
    
	return (0);
}
