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

/// @brief print char
/// @param c int
/// @return int (counter)
int	ft_putchar(int c)
{
	int	count;

	count = 0;
	count += write(1, &c, 1);
	return (count);
}

/// @brief print str
/// @param c const char *
/// @return int (counter)
int	ft_putstr(const char *c)
{
	int	count;

	count = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[count] != '\0')
	{
		ft_putchar(c[count]);
		count++;
	}
	return (count);
}
