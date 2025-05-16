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

#executable file name
NAME = pipex

#compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

#libft rute & .a capture
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

#src & obj definition
SRC = pipex.c pipex_path.c pipex_utils.c
OBJ = $(SRC:.c=.o)

#make lib first then pipex
all: $(LIBFT) $(NAME)

#if libft not created, enters directory (-C) & creates it
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

#compile pipex's obj + libft.a
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

#compiles .c files in every .o in case pipex.h or .c file changes
%.o: %.c pipex.h
	$(CC) $(CFLAGS) -c $< -o $@

#erase .o only + create libft if not created
clean:
	rm -f $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

#erase .o & .a + create libft if not created
fclean:
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

#erase .o & .a + recompile
re: fclean all

#command reserved words
.PHONY: all clean fclean re