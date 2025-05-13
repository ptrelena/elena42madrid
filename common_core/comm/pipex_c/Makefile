# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2025-05-09 11:36:06 by elenpere          #+#    #+#             #
#   Updated: 2025-05-09 11:36:06 by elenpere         ##   ########.fr       #
#                                                                            #
# ************************************************************************** #

##hay que añadir la libft + el resto igual

NAME = pipex.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
A_C = ar rcs

SRC = 

OBJ = $(SRC:.C=.O)

all: $(NAME)

$(NAME): $(OBJ)
	$(A_C) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re