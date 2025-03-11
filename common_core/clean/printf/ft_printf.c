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

#include "ft_printf.h"

static int	ft_convert(va_list args, char n)
{
	int	count;

	count = 0;
	if (n == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (n == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (n == 'p')
		count += ft_putptr(va_arg(args, unsigned long));
	else if (n == 'd' || n == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (n == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (n == 'x')
		count += ft_putbase(va_arg(args, unsigned int), HEXLOWER);
	else if (n == 'X')
		count += ft_putbase(va_arg(args, unsigned int), HEXUPPER);
	else if (n == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *c, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, c);
	while (c[i] != '\0')
	{
		if (c[i] == '%')
		{
			count += ft_convert(args, c[i + 1]);
			i++;
		}
		else
			count += ft_putchar(c[i]);
		i++;
	}
	va_end(args);
	return (count);
}
