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

//digit & int printing
/// @brief print number
/// @param c int
/// @return int (counter)
int	ft_putnbr(int c)
{
	int		count; //printed chars counter
	char	digit; //variable to save int converted to char

	count = 0;
	if (c == -2147483648) //specifically print min negative
	{
		write(1, "-2147483648", 11);
		count = 11; //add up 11 chars to counter - "-2147483648"
	}
	else
	{
		if (c < 0) //treat negative num
		{
			count += write(1, "-", 1); //include (-) char + add up counter
			c = -c; //convert num to positive
		}
		if (c >= 10) //treat decimal base number
			count += ft_putnbr(c / 10); //recursion + add up counter
		digit = c % 10 + '0'; //convert digit to char
		count += write(1, &digit, 1); //print digit alone + add up counter
	}
	return(count); //return num of chars printed
}

//unsigned printing
/// @brief print unsigned number
/// @param c unisgned int
/// @return int (counter)
int	ft_putunsigned(unsigned int c)
{
	int	count; //printed chars counter

	count = 0;
	if (c >= 10) //treat decimal base number
		count += ft_putunsigned(c / 10); //recursion + add up counter
	count += ft_putchar((c % 10) + '0'); //print digit alone + add up counter
	return (count); //return num of chars printed
}

//hex lower & upper printing
/// @brief print base number
/// @param c unisgned long
/// @param base char* - hexadecimal
/// @return int (counter)
int	ft_putbase(unsigned long c, char *base)
{
	int	count; //printed chars counter
	
	count = 0;
	if (c >= 16) //treat hexadecimal base number
		count += ft_putbase(c / 16, base); //recursion + add up counter
	count += ft_putchar(base[c % 16]); //(c % 16)=[i] 'hex' char position
	return (count); //return num of chars printed
}

//ptr printing
/// @brief print ptr mem direction
/// @param ptr unsigned long
/// @return int (counter)
int	ft_putptr(unsigned long ptr)
{
	int	count; //printed chars counter

	count = 0;
	if (!ptr) //ptr failure
	{
		ft_putstr("(nil)"); //(nil) = (null) Ubuntu
		return (5); //return 5 chars printed - "(nil)"
	}
	else
	{
		count += write(1, "0x", 2); //print '0x' + add up counter
		count += ft_putbase(ptr, HEXLOWER); //change base + add up counter
	}
	return (count); //return num of chars printed
}
