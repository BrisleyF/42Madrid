# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brfajard <brfajard@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 12:25:39 by brfajard          #+#    #+#              #
#    Updated: 2024/03/17 16:36:20 by brfajard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Instructions
NAME =	libft.a 	# Nombre de la biblioteca estatica
CC =	gcc		# Esto asigna el compilador que se utilizará en el Makefile. 
CFLAGS =	-Wall -Wextra -Werror -I.	# '-I.' agrega el directorio actual al camino de búsqueda de inclusión, lo que significa que el compilador buscará archivos de encabezado también en el directorio actual.
AR =	ar rcs	# 'ar' es una utilidad de Unix para manipular archivos de biblioteca. En conjunto, ar rc se utiliza para crear o actualizar un archivo de biblioteca estática. 
RM =	rm -f	# variable que asigna el comando que se utilizará para eliminar archivos.

# Files
SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c	# Variable que contiene una lista de archivos o funciones.  

OBJS =	$(SRC:.c=.o)	# Variable  que utiliza una regla de sustitución de patrones para reemplazar la extensión ".c" por ".o" en cada uno de los nombres de archivo en la variable SRCS. 


# Reglas:

#1 Esta regla se utiliza para compilar todo el proyecto. Solo compila lo requerido inicialmente.

#'rcs' son las opciones utilizadas con 'ar':
#'r': Agrega o reemplaza archivos en la biblioteca.
#'c': Crea la biblioteca si no existe.
#'s': Crea un índice para la biblioteca, lo que puede mejorar el rendimiento en algunas situaciones.
#'$(NAME):' Crear el ejecutable.
#'%.o : %.c' Regla patron que permite generar un archivo .o apartir de un archivo .c con las flags requeridas.
#'$< $@' Variables automaticas. Usaría '$@' para el nombre del archivo objeto y '$<' para el nombre del archivo fuente.

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o : %.c 
		$(CC) -c $(CFLAGS) $< -o $@

#2 Esta regla se utiliza para limpiar los archivos generados por la compilación (.o).
clean:
			$(RM) $(OBJS)

#3 Además de eliminar los archivos generados por la compilación, también elimina el ejecutable final y cualquier otro archivo que se haya creado como resultado del proceso de compilación. Esto deja el directorio en el estado en que estaba antes de compilar el proyecto.
fclean:		clean
			$(RM) $(NAME)
			$(RM) a.out

#4 Esta regla es una abreviatura de "rebuild" (reconstruir). Cuando se ejecuta, realiza una limpieza completa del proyecto utilizando la regla 'fclean' y luego vuelve a compilar todo el proyecto desde cero utilizando la regla 'all'. Es útil cuando se desea reconstruir completamente el proyecto sin dejar ningún rastro de compilaciones anteriores.
re:			fclean
			 $(MAKE) all

#5 Esta regla compila lo requerido inicialmente + lo considerado bunus.   
bonus: 

#6 Al marcar estos objetivos como .PHONY, se le indica a Make que no intente buscar archivos con los mismos nombres en el directorio y, en su lugar, simplemente ejecute las reglas asociadas con esos nombres como acciones. Esto garantiza que Make siempre ejecute las reglas asociadas con estos objetivos, incluso si hay archivos con los mismos nombres presentes en el directorio.
.PHONY:		all clean fclean re bonus