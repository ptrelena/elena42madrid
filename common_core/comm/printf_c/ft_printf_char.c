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

#include "libftprintf.h"

//char & percentage printing
void	ft_putchar(int c)
{
	write(1, &c, 1);
}

//str printing
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