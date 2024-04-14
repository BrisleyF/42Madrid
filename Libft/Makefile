# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brfajard <marvin@42.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 12:25:39 by brfajard          #+#    #+#              #
#    Updated: 2024/03/17 16:36:20 by brfajard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I.
AR = ar rcs
RM = rm -f

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJS =	$(SRC:.c=.o)

BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		

BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(BONUS_OBJS)


fclean: clean
	$(RM) $(NAME)
	$(RM) a.out


re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

# Instructions:

# NAME = Nombre de la biblioteca estatica
# '-I.' agrega el directorio actual al camino de búsqueda de inclusión,
# lo que significa que el compilador buscará archivos de encabezado también en el directorio actual.
# 'ar' es una utilidad de Unix para manipular archivos de biblioteca. En conjunto,
# ar rc se utiliza para crear o actualizar un archivo de biblioteca estática.
# variable que asigna el comando que se utilizará para eliminar archivos.
# Variable  que utiliza una regla de sustitución de patrones para reemplazar 
# la extensión ".c" por ".o" en cada uno de los nombres de archivo en la variable SRCS.


# Reglas:

#1 Esta regla se utiliza para compilar todo el proyecto. Solo compila lo requerido inicialmente.
#'rcs' son las opciones utilizadas con 'ar':
#'r': Agrega o reemplaza archivos en la biblioteca.
#'c': Crea la biblioteca si no existe.
#'s': Crea un índice para la biblioteca, lo que puede mejorar el rendimiento en algunas situaciones.
#'$(NAME):' Crear el ejecutable.
#'%.o : %.c' Regla patron que permite generar un archivo .o apartir de un archivo .c con las flags requeridas.
#'$< $@' Variables automaticas. Usaría '$@' para el nombre del archivo objeto y '$<' para el nombre del archivo fuente.

#2 Esta regla se utiliza para limpiar los archivos generados por la compilación (.o).

#3 Además de eliminar los archivos generados por la compilación, también elimina el ejecutable final y 
# cualquier otro archivo que se haya creado como resultado del proceso de compilación.
# Esto deja el directorio en el estado en que estaba antes de compilar el proyecto.

#4 Esta regla es una abreviatura de "rebuild" (reconstruir). Cuando se ejecuta,
# realiza una limpieza completa del proyecto utilizando la regla 'fclean' 
# y luego vuelve a compilar todo el proyecto desde cero utilizando la regla 'all'. Es útil cuando se desea reconstruir 
# completamente el proyecto sin dejar ningún rastro de compilaciones anteriores.

#5 Esta regla compila lo requerido inicialmente + lo considerado bunus.

#6 Al marcar estos objetivos como .PHONY, se le indica a Make que no intente buscar archivos con los mismos nombres en el directorio y,
# en su lugar, simplemente ejecute las reglas asociadas con esos nombres como acciones. Esto garantiza que Make siempre ejecute las
# reglas asociadas con estos objetivos, incluso si hay archivos con los mismos nombres presentes en el directorio.
