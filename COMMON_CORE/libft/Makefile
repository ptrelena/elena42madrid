# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2025-01-15 11:46:28 by elenpere          #+#    #+#             #
#   Updated: 2025-01-15 11:46:28 by elenpere         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

#file name ofter complation
NAME = libft.a

#compilation command
CC = cc
#compilation flags
CFLAGS = -Wall -Wextra -Werror

A_C = ar rc

#.c files to be compiled
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

# ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

#transform SRC from .c to .o
OBJ = $(SRC:.c=.o)

#all for compilation - NAME > OBJ + commands #make all
all: $(NAME)

$(NAME): $(OBJ)
	$(A_C) $(NAME) $(OBJ)

#ar: creates, modifies and extracts files from libraries
#r: updates files to latest version / adds new unexisting files
#c: creates library if not exists / no error if library exists
#s: inner library index for files to be linked correctly

#clean to erase files .o #make clean
clean: 
	rm -f $(OBJ)

#fclean to erase files .o & .a #make fclean
fclean: clean
	rm -f $(NAME)
	
#re to erase all & recompile #make re
re: fclean all

#declara rules as "false" to always execute them (??)
PHONY: clean fclean re