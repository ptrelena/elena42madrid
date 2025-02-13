/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 11:44:02 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 11:44:02 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalpha() function tests for any character for which isupper(3) or
islower(3) is true. The value of the argument must be representable as an
unsigned char or thevalue of EOF */

//include library
#include "libft.h"

int ft_isalpha(int c) //ft prototype
{
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    //int included in alphabetic ascii
        return (1); //return 1
    return (0); //return 0
}

// int main(void)
// {
//     int a = 'e'; //lowercase
//     int b = 'E'; //uppercase
//     int c = '3'; //number
//     int d = ' '; //space
//     int e = '@'; //special char

//     printf("%d\n", ft_isalpha(a));
//     printf("%d\n", ft_isalpha(b));
// 	printf("%d\n", ft_isalpha(c));
//     printf("%d\n", ft_isalpha(d));
//     printf("%d\n", ft_isalpha(e));
// 	return (0); //void ft
// }
