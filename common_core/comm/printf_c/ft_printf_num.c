/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-10 19:51:12 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-10 19:51:12 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//digit & int printing
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

//unsigned printing
void	ft_putunsigned(int c)
{
	unsigned int num;

	if (c < 0)
		num = (unsigned int)c; //convert n to 32bits archictecture
	else
		num = c;
	if (num >= 10)
		ft_putunsigned(num / 10);
	ft_putchar((num % 10) + '0');
}

//hex lower & upper printing
void	ft_puthex(unsigned long c, char *base)
{
	if (c >= 16)
		ft_puthex(c / 16, base);
    ft_putchar(base[c % 16]); // (c % 16) = [i] for 'hex' char position
}

//ptr printing
void	ft_putptr(unsigned long ptr)
{
	if (!ptr)
		ft_putstr("(nil)");
	else
	{
		write(1, "0x", 2);
		ft_puthex(ptr, HEXLOWER);
	}
}
