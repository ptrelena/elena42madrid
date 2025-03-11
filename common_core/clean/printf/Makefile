# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2025-03-03 14:09:38 by elenpere          #+#    #+#             #
#   Updated: 2025-03-03 14:09:38 by elenpere         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

A_C = ar rcs

SRC = ft_printf.c ft_printf_char.c ft_printf_num.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(A_C) $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re