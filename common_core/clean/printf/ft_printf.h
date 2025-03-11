/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-03 14:05:37 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-03 14:05:37 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef HEXLOWER
#  define HEXLOWER "0123456789abcdef"
# endif

# ifndef HEXUPPER
#  define HEXUPPER "0123456789ABCDEF"
# endif

int	ft_printf(char const *c, ...);
int	ft_putchar(int c);
int	ft_putstr(const char *c);
int	ft_putnbr(int c);
int	ft_putunsigned(unsigned int c);
int	ft_putbase(unsigned long c, char *base);
int	ft_putptr(unsigned long ptr);

#endif
