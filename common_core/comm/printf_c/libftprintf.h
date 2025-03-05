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

#ifndef LIBFTPRINTFT_H
# define LIBFTPRINTFT_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(int c);
int		ft_putstr(const char *c);
void	ft_putnbr(int c);
void	ft_putunsigned(int n);
void	ft_puthexlower(int n);
void	ft_puthexupper(int n);
void	*ft_putptr(void *ptr);

#endif