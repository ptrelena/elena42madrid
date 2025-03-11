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
	int count; //printed chars counter

	//first arg = va_ar(va_list args, variable type)
	count = 0;
	if (n == 'c') //char
		count += ft_putchar(va_arg(args, int));
	else if (n == 's') //str
		count += ft_putstr(va_arg(args, char*));
	else if (n == 'p') //ptr
		count += ft_putptr(va_arg(args, unsigned long));
	else if (n == 'd' || n == 'i') //digit & int
		count += ft_putnbr(va_arg(args, int));
	else if (n == 'u') //unsigned
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (n == 'x') //lower hex base
		count += ft_putbase(va_arg(args, unsigned int), HEXLOWER);
	else if (n == 'X') //upper hex base
		count += ft_putbase(va_arg(args, unsigned int), HEXUPPER);
	else if (n == '%') //percentage
		count += ft_putchar('%');
	return (count); //return num of chars printed
}

int	ft_printf(char const *c, ...)
{
	int		i;
	int		count; //printed chars counter
	va_list	args; //variadic lists varible including args

	i = 0;
	count = 0;
	va_start(args, c); //variadic list starts, calling args & c
	while (c[i] != '\0') //c existing / not empy
	{
		if (c[i] == '%') //% means a data type follows
		{
			count += ft_convert(args, c[i + 1]); //convert data received
			i++; //keep looping
		}
		else
			count += ft_putchar(c[i]); //no % found, print str received
		i++; //keep looping
	}
	va_end(args); //variadic list ends
	return (count); //return num of chars printed
}