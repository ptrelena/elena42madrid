/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-10 19:50:56 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-10 19:50:56 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//char & percentage printing
/// @brief print char
/// @param c int
/// @return int (counter)
int	ft_putchar(int c)
{
	int	count; //printed chars counter

	count = 0;
	count += write(1, &c, 1); //print char + add up counter
	return (count); //return num of chars printed
}

//str printing
/// @brief print str
/// @param c const char *
/// @return int (counter)
int	ft_putstr(const char *c)
{
	int	count; //printed chars counter

	count = 0;
	if (c == NULL) //if str fails
	{
		write(1, "(null)", 6); //print (null)
		return (6); //return 6 chars printed - "(null)"
	}
	while (c[count] != '\0') //iterate str usign 'count' as index
	{
		ft_putchar(c[count]); //print str chars individually
		count++; //add up counter w each char
	}
	return (count); //return num of chars printed
}