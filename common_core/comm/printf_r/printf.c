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

static void	ft_convert(va_list args, char n)
{
	if (n == 'c')
		ft_putchar(va_arg(args, int));
	else if (n == 's')
		ft_putstr(va_arg(args, char*));
	else if (n == 'p')
		ft_putptr(va_arg(args, char*));
	else if (n == 'd' || n == 'i')
		ft_putnbr(va_arg(args, int));
	else if (n == 'u')
		ft_putunsigned(va_arg(args, unsigned int));
	else if (n == 'x')
		ft_puthexlower(va_arg(args, unsigned int));
	else if (n == 'X')
		ft_puthexupper(va_arg(args, unsigned int));
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

/* int	main(void)
{
	char	c1 = 'c';
	char	*s1 = "Elena";
	char	*s2 = NULL;
	char	*ptr = "my name is Elena";
	int	d1 = 1;
	int	i1 = -2147483648;
	unsigned int	u1 = 12;
	unsigned int	u2 = -854;
	unsigned int	xlower = 267;
	
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
	ft_printf("e: printing ptr %p\n", ptr);
	printf("p: printing ptr %p\n", ptr);

	//digit
	ft_printf("e: printing digit %d\n", d1);
	printf("p: printing digit %d\n", d1);

	//integer
	ft_printf("e: printing integer %i\n", i1);
	printf("p: printing integer %i\n", i1);

	//unsigned int - positive
	ft_printf("e: printing unsigned int %u\n", u1);
	printf("p: printing unsigned int %u\n", u1);

	//unsigned int - negative
	ft_printf("e: printing unsigned int %u\n", u2);
	printf("p: printing unsigned int %u\n", u2);

	//hexadecimal lowecase
	ft_printf("e: printing hexadecimal lowecase %x\n", xlower);
	printf("p: printing hexadecimal lowecase %x\n", xlower);

	//hexadecimal uppercase
	ft_printf("e: printing hexadecimal uppercase %X\n", xlower);
	printf("p: printing hexadecimal uppercase %X\n", xlower);

	//percentage
	ft_printf("e: printing percentage %%%%\n");
	printf("p: printing percentage %%%%\n");
	
	return(0);
} */
