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

// Función para convertir un carácter a mayúsculas
char	to_uppercase(unsigned int index, char c)
{
    // Suponemos que queremos convertir a mayúsculas
    // Si es un carácter en minúsculas
    if (c >= 'a' && c <= 'z')
        return c - 32; // Convertir a mayúsculas
    else
        return c; // Devolver el carácter original si no es una letra minúscula
}

// Función para modificar cada carácter de la cadena
char increment_char(unsigned int index, char c)
{
    // Incrementar el valor ASCII del carácter en 1
    return c + 1;
}

// Función que imprime el índice y el carácter
void print_index_char(unsigned int index, char *c)
{
    printf("Carácter en la posición %u: %c\n", index, *c);
}

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
    char dest[10] = "Hello, ";
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

    17) ft_strncmp:
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

    18) ft_memchr:
    const char *str = "Mi mamá me mima";
    char *found = ft_memchr(str, 'x', strlen(str));
    if (found != NULL) {
        printf("El caracter 'x' se encontró en la posición %ld.\n", found - str);
        printf("Resultado: %s\n", found);
        printf("Resultado: %s\n", str);
    } else {
        printf("El caracter 'x' no se encontró.\n");
    }

    19) ft_memcmp:
    // Definimos dos bloques de memoria para comparar
    char block1[] = "Applyab";
    char block2[] = "Applehx";
    // Definimos el número de bytes a comparar
    size_t n = 7; // Se compararán los primeros 5 bytes
    // Realizamos la comparación utilizando memcmp()
    int result = ft_memcmp(block1, block2, n);
    // Mostramos el resultado de la comparación
    if (result < 0) {
        printf("block1 es menor que block2\n");
    } else if (result == 0) {
        printf("block1 es igual a block2\n");
    } else {
        printf("block1 es mayor que block2\n");
    }

    20) ft_strnstr:
    const char *haystack = "Hello, world! This is a test string.";
    const char *needle = "world";
    size_t len = 15; // Buscar solo en los primeros 15 caracteres de haystack
    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Subcadena encontrada en la posición %ld: %s\n", result - haystack, result);
    } else {
        printf("Subcadena no encontrada.\n");
    }

    21) ft_atoi: 
    // Ejemplos de cadenas de caracteres que representan números
    const char *str1 = "123";
    const char *str2 = "-456";
    const char *str3 = "   789";
    const char *str4 = "+321";
    const char *str5 = "   -123abc";
    // Llamadas a la función ft_atoi y muestra de los resultados
    printf("Número convertido de \"%s\": %d\n", str1, ft_atoi(str1));
    printf("Número convertido de \"%s\": %d\n", str2, ft_atoi(str2));
    printf("Número convertido de \"%s\": %d\n", str3, ft_atoi(str3));
    printf("Número convertido de \"%s\": %d\n", str4, ft_atoi(str4));
    printf("Número convertido de \"%s\": %d\n", str5, ft_atoi(str5));

    // 22) ft_calloc:
    size_t num_elements = 5; // Número de elementos en el arreglo
    size_t size_of_elements = sizeof(int); // Tamaño de cada elemento (en bytes)
    // Llamada a ft_calloc para asignar memoria para un arreglo de 5 enteros
    int *array = (int *)ft_calloc(num_elements, size_of_elements);
    // Verificación si la asignación de memoria fue exitosa
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1; // Salir del programa con un código de error
    }
    // Inicializar el índice y llenar el arreglo con valores
    size_t i = 0;
    while (i < num_elements) {
        array[i] = i * 10; // Llenar el arreglo con valores (0, 10, 20, 30, 40)
        i++;
    }
    // Imprimir el contenido del arreglo
    printf("Contenido del arreglo:\n");
    i = 0;
    while (i < num_elements) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    // Liberar la memoria asignada
    free(array);
 
    // 23) ft_strdup:
    const char* original;
    char* duplicado = strdup(original);
    if (duplicado != NULL) {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicado);
        free(duplicado); // Liberamos la memoria asignada dinámicamente
    } else {
        printf("Error: No se pudo duplicar la cadena\n");
    }

    // 24) ft_strncpy:
    char *origen = "Dime lindura";
    unsigned int start = 0;
    size_t len = 5;
    char *copia = ft_substr(origen, start, len);
    if (copia != NULL) {
        printf("Cadena original: %s\n", origen);
        printf("Cadena copiada: %s\n", copia);
        free(copia); // Liberamos la memoria asignada dinámicamente
    } else {
        printf("Error: No se pudo copiar la cadena\n");
    }

    // 25) ft_strjoin: 
    char *origen = "Dime";
    char *destino = "lindura";
    char *concatenacion = ft_strjoin(origen, destino);
    if (concatenacion != NULL) {
        printf("Cadena original: %s\n", origen);
        printf("Cadena concatenacion: %s\n", concatenacion);
        free(concatenacion); // Liberamos la memoria asignada dinámicamente
    } else {
        printf("Error: No se pudo copiar la cadena\n");
    }
    
    // 26) ft_strtrim: 
    char *origen = "papas fritas";
    char *set = "pas";

    char *corte = ft_strtrim(origen, set);
    if (corte != NULL) {
        printf("Cadena original: %s\n", origen);
        printf("Cadena corte: %s\n", corte);
        free(corte); // Liberamos la memoria asignada dinámicamente
    } else {
        printf("Error: No se pudo cartar la cadena\n");
    }

    // 27) ft_split:
    char str[] = "This is a test string.";
    char **words;
    char delim = ' '; // Carácter delimitador
    int i = 0;
    // Llamada a ft_split para dividir la cadena 'str' en palabras utilizando el delimitador 'delim'
    words = ft_split(str, delim);
    if (words == NULL) {
        printf("Error: No se pudo dividir la cadena.\n");
        return 1; // Salir con código de error
    }
    // Iterar sobre el arreglo de palabras y mostrar cada palabra
    while (words[i] != NULL) {
        printf("Palabra %d: %s\n", i + 1, words[i]);
        i++;
    }
    // Liberar la memoria asignada para el arreglo de palabras
    free(words);

    // 28) ft_itoa:
    int num = 123;
    // Llamadas a la función ft_atoi y muestra de los resultados
    printf("Número convertido de %d: \"%s\"\n", num, ft_itoa(num));

    // 29) ft_strmapi: 
    // Cadena de caracteres de entrada
    char input[] = "Hola, mundo!";
    // Aplicar ft_strmapi para convertir la cadena a mayúsculas
    char *result = ft_strmapi(input, &increment_char);
    // Imprimir el resultado
    printf("Cadena original: %s\n", input);
    printf("Cadena con cada carácter duplicado: %s\n", result);
    // Liberar memoria
    free(result);

    // 30) ft_striteri:
    // Cadena de caracteres de entrada
    char input[] = "Hola, mundo!";
    // Aplicar ft_strmapi para convertir la cadena a mayúsculas
    ft_striteri(input, &print_index_char);

    // 31) ft_putchar_fd:
     char c = 'A';
    // Imprime el carácter 'A' en la salida estándar (stdout)
    ft_putchar_fd(c, 1);
    printf("\n");

    // 32) ft_putstr_fd: 
    char *s = "Hello, world!";
    // Escribe la cadena "Hello, world!" en la salida estándar (stdout)
    ft_putstr_fd(s, 1);
    printf("\n");

    // 33) ft_putendl_fd: 
    char *s = "Hello, world!";
    // Escribe la cadena "Hello, world!" seguida de un salto de línea en la salida estándar (stdout)
    ft_putendl_fd(s, 1);

    // 34) ft_putnbr_fd;
    int number = -12345;
    // Escribe el número 12345 en la salida estándar (stdout)
    ft_putnbr_fd(number, 1);
    printf("\n");
*/
	return (0);
}
