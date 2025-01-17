/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 11:45:28 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 11:45:28 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Incluímos un if para asegurarnos de que la librería está creada, si no que se cree.
#ifndef LIBFT_H
# define LIBFT_H

// Llamamos a las librerías necesarias para tus funciones
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Declaras funciones de los archivos a entregar - parte 1, parte 2, bonus

// PARTE 1
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char   *ft_strrchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
void    *ft_memchr(const void *s, int c, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);

// PARTE 2

// BONUS

// Cerramos el condicional if
#endif





