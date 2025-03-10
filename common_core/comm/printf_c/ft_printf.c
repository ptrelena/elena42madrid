/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-10 16:57:07 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-10 16:57:07 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_convert(va_list args, char n)
{
	if (n == 'c')
		ft_putchar(va_arg(args, int));
	else if (n == 's')
		ft_putstr(va_arg(args, char*));
	else if (n == 'p')
		ft_putptr(va_arg(args, unsigned long));
	else if (n == 'd' || n == 'i')
		ft_putnbr(va_arg(args, int));
	else if (n == 'u')
		ft_putunsigned(va_arg(args, unsigned int));
	else if (n == 'x')
		ft_puthex(va_arg(args, unsigned int), HEXLOWER);
	else if (n == 'X')
		ft_puthex(va_arg(args, unsigned int), HEXUPPER);
	else if (n == '%')
		ft_putchar('%');
}

int	ft_printf(char const *c, ...)
{
	int	i;
	va_list	args;

	i = 0;
	va_start(args, c);
	while(c[i] != '\0')
	{
		if (c[i] == '%')
		{
			ft_convert(args, c[i + 1]);
			i++;
		}
		else
			ft_putchar(c[i]);
		i++;
	}
	va_end(args);
	return(0);
}