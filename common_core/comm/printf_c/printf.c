/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-03 14:03:18 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-03 14:03:18 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}


int	ft_putstr(const char *c)
{
	int	i;

	i = 0;
	if(c == NULL)
		return (write(1, "(null)", 6));
	while(c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	return(0);
}

void	ft_putnbr(int c)
{
	char	digit;

	if (c == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (c < 0)
		{
			write(1, "-", 1);
			c = -c;
		}
		if (c >= 10)
			ft_putnbr(c / 10);
		digit = c % 10 + '0';
		write(1, &digit, 1);
	}
}

void	ft_convert(va_list args, char n)
{
	if (n == 'c')
		ft_putchar(va_arg(args, int));
	else if (n == 's')
		ft_putstr(va_arg(args, char*));
	else if (n == 'p')
		ft_putstr(va_arg(args, char*));
	else if (n == 'd')
		ft_putnbr(va_arg(args, int));
	
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

int	main(void)
{
	char	c1 = 'c';
	char	*s1 = "Elena";
	char	*s2 = NULL;
	int	i1 = 123;
	
	//char
	ft_printf("e: printing char %c\n", c1);
	printf("p: printing char %c\n", c1);

	//str
	ft_printf("e: printing str %s\n", s1);
	printf("p: printing str %s\n", s1);

	//empty str
	ft_printf("e: printing empty str %s\n", s2);
	printf("p: printing empty str %s\n", s2);

	//ptr
	ft_printf("p: printing ptr %p\n", s1);
	printf("p: printing ptr %p\n", s1);

	//digit
	ft_printf("p: printing digit %d\n", i1);
	printf("p: printing digit %d\n", i1);

	

	return(0);
}

/* 
	else if (n == 'd')
		// imprimir digito
	else if (n == 'i')
		// imprimir int
	else if (n == 'u')
		// imprimir unsigned
	else if (n == 'x')
		// imprimir hexadegimal minusc = 0123456789abcdef
	else if (n == 'X')
		// imprimir hexadecimal mayusc = 0123456789ABCDEF
	else if (n == '%%')
		//imprimir %
	else */


	/* size_t	ft_strlen(const char *c)
{
	size_t	len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return(len);
} */