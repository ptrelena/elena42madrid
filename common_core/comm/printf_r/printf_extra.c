/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_extra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-05 12:18:37 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-05 12:18:37 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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


void	ft_putunsigned(int n)
{
	unsigned int num;

	if (n < 0)
		num = (unsigned int)n; //convert n to 32bits archictecture
	else
		num = n;
	if (num >= 10)
		ft_putunsigned(num / 10);
	ft_putchar((num % 10) + '0');
}

void	ft_puthexlower(int n)
{
	unsigned int num;
	char	*hex;

	num = (unsigned int)n;
	hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthexlower(num / 16);
    ft_putchar(hex[num % 16]); // (num % 16) = [i] for 'hex' char position
}

void	ft_puthexupper(int n)
{
	unsigned int num;
	char	*hex;

	num = (unsigned int)n;
	hex = "0123456789ABCDEF";
	if (num >= 16)
        ft_puthexupper(num / 16);
    ft_putchar(hex[num % 16]); // (num % 16) = [i] for 'hex' char position
}

void	*ft_putptr(void *ptr)
{
	unsigned long mem = (unsigned long)ptr; //enough space to save ptr location

	write(1, "0x", 2); //indicates an hexdecimal num follows
	if (mem == 0)
		ft_putchar('0');
	else
		ft_puthexlower(mem); //print hexadecimal mem location
	return (ptr);
}