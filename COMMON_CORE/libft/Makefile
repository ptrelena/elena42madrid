/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 11:46:28 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 11:46:28 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# Indicamos el nombre del archivo resultante después de compilación
NAME = libft.a

# Comando para compilar
CC = gcc
# Flags para compilar
CFLAGS = -Wall -Wextra -Werror

# Archivos .c que se van a compilar
SRC = ft_isalpha.c, 

# Transformación de los archivos de SRC de .c a .o
OBJ = $(SRC: .c .o)

# Definimos all para compilar - Llamamos a NAME > Dentro incluimos OBJ + comandos
all: $(NAME)
	ar rcs $(OBJ)

# ar: Crea, modifica y extrae archivos de librerías estáticas (normalmente con extensión .a en sistemas UNIX)
# r: Reemplaza archivos existentes en la librería con versiones nuevas, o agrega nuevos archivos si no existen ya en la librería
# c: Crea una nueva librería si no existe. Si la librería ya existe, no se muestra ningún error. Asegura que la operación no falle si el archivo aún no existe.
# s: Crea un índice interno para la librería que ayuda a encontrar rápidamente los símbolos. Permite que los archivos se enlacen correctamente sin necesidad de un orden explícito de los objetos.

# Definimos clean para eliminar los archivos .o
clean: 
	rm -f $(OBJ)

# Definimos fclean para eliminar todo (archivos .o y .a) - solo indicamos $(NAME) ya que $(OBJ) esta includido en $(NAME)
fclean: 
	rm -f $(NAME)
	
# Definimos re para eliminar todo y volver a compilar
re: fclean all

# Declara estas reglas como "falsas" para que siempre se ejecuten, incluso si existen archivos en el directorio con los mismos nombres.
.PHONY: clean fclean re

# make clean: Limpia archivos intermedios.
# make fclean: Limpia todo, incluyendo ejecutables.
# make re: Limpia completamente y recompila desde cero.
# make all: Compila el proyecto si es necesario.