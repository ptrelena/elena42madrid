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

#include "libft.h"

/// @brief coverts from char to int
/// @param nptr
/// @return final int
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		if (nptr[i] == '+')
			sign = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int main(void)
{
	char    a [] = "-1"; //ex1 - positive number
	char    b [] = "1"; //ex2 - negative number
	char    c [] = " 1"; //ex3 - space + positive number
	char    d [] = " +1"; //ex4 - space + sign + number
	char    e [] = " a1"; //ex5 - no numeric char

	//analyze 'a'
	printf("%s\n", a); //printf before atoi
	ft_atoi(a);
	printf("%s\n", a); //printf after atoi

	//analyze 'b'
	printf("%s\n", b); //printf before atoi
	ft_atoi(b);
	printf("%s\n", b); //printf after atoi

	//analyze 'c'
	printf("%s\n", c); //printf before atoi
	ft_atoi(c);
	printf("%s\n", c); //printf after atoi

	//analyze 'd'
	printf("%s\n", d); //printf before atoi
	ft_atoi(d);
	printf("%s\n", d); //printf after atoi

	//analyze 'e'
	printf("%s\n", e); //printf before atoi
	ft_atoi(e);
	printf("%s\n", e); //printf after atoi
	return (0);
} */