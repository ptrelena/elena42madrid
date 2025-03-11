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

#include "ft_printf.h"

/// @brief print number
/// @param c int
/// @return int (counter)
int	ft_putnbr(int c)
{
	int		count;
	char	digit;

	count = 0;
	if (c == -2147483648)
	{
		write(1, "-2147483648", 11);
		count = 11;
	}
	else
	{
		if (c < 0)
		{
			count += write(1, "-", 1);
			c = -c;
		}
		if (c >= 10)
			count += ft_putnbr(c / 10);
		digit = c % 10 + '0';
		count += write(1, &digit, 1);
	}
	return (count);
}

/// @brief print unsigned number
/// @param c unisgned int
/// @return int (counter)
int	ft_putunsigned(unsigned int c)
{
	int	count;

	count = 0;
	if (c >= 10)
		count += ft_putunsigned(c / 10);
	count += ft_putchar((c % 10) + '0');
	return (count);
}

/// @brief print base number
/// @param c unisgned long
/// @param base char* - hexadecimal
/// @return int (counter)
int	ft_putbase(unsigned long c, char *base)
{
	int	count;

	count = 0;
	if (c >= 16)
		count += ft_putbase(c / 16, base);
	count += ft_putchar(base[c % 16]);
	return (count);
}

/// @brief print ptr mem direction
/// @param ptr unsigned long
/// @return int (counter)
int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		count += write(1, "0x", 2);
		count += ft_putbase(ptr, HEXLOWER);
	}
	return (count);
}
