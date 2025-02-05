/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:03:56 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:03:56 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts the initial portion of the string pointed to by str
to int representation. Transforma str a int */


// Incluímos nuestra librería
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ') //Ignoramos espacios
		i++;
	
	if (nptr[i] == '-') //Comprobamos número positivo o negativo
	{
		sign = -1;
		i++;
	}	
	if (nptr[i] == '+')
		i++;
	
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
        result = result * 10 + (nptr[i] - '0');  //Conversión char a int 0 = 48
        i++;  //Siguiente char
    }

	return (result * sign);
}
/*
int	main(void)
{
	int	a;
	int	b;
	a = ft_atoi("15");
	printf("%i", a);
	b = atoi("-15");
	printf("%i", b);
}*/