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


//include library
#include "libft.h"

int ft_atoi(const char *nptr) //ft prototype
{
	int	i = 0; //counter
	int	sign = 1; //int to define sign
	int	result = 0; //int to save final number
   
    while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32)) //no spaces
        i++; //keep looping

    if (nptr[i] == '-' || nptr[i] == '+') //check number sign
    {
        if (nptr[i] == '-') //loop for negative numbers
            sign = -1; //change sign to negative
        if (nptr[i] == '+') //loop for positive numbers
            sign = 1; //change sign to positive
        i++; //keep looping
    }

    //convert numeric chars to int
    while (nptr[i] >= '0' && nptr[i] <= '9') //loop numeric char
    {
        result = result * 10 + (nptr[i] - '0'); 
		// (result * 10) moves analyzed digit to left
		// (nptr[i] - '0') => ascii digit - ascii '0' = digit numeric value
        i++; //keep looping
    }

    return (result * sign); //result final value * numer sign (1 / -1)
}

// int main(void)
// {
//     char    a [] = "-1"; //ex1 - positive number
// 	char    b [] = "1"; //ex2 - negative number
//     char    c [] = " 1"; //ex3 - space + positive number
//     char    d [] = " +1"; //ex4 - space + sign + number
//     char    e [] = " a1"; //ex5 - no numeric char

//     //analyze 'a'
//     printf("%s\n", a); //printf before atoi
//     ft_atoi(a);
//     printf("%s\n", a); //printf after atoi

//     //analyze 'b'
//     printf("%s\n", b); //printf before atoi
//     ft_atoi(b);
//     printf("%s\n", b); //printf after atoi

//     //analyze 'c'
//     printf("%s\n", c); //printf before atoi
//     ft_atoi(c);
//     printf("%s\n", c); //printf after atoi

//     //analyze 'd'
//     printf("%s\n", d); //printf before atoi
//     ft_atoi(d);
//     printf("%s\n", d); //printf after atoi

//     //analyze 'e'
//     printf("%s\n", e); //printf before atoi
//     ft_atoi(e);
//     printf("%s\n", e); //printf after atoi
//     return 0;
// }