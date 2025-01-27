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

/*The isalpha() function tests for any character for which isupper(3) or islower(3) is true. 
The value of the argument must be representable as an unsigned char or thevalue of EOF */

// Llamamos a nuestra librería
#include "libft.h"

// Escribimos el prototipo de la función indicado en el manual
int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

/*
int main(void)
{
    int a;
    int b;
    int c;
	
    a = 'e';
    b = 'E';
    c = '3';
    printf("%d", ft_isalpha(a));
    printf("%d", ft_isalpha(b));
	printf("%d", ft_isalpha(c));
	return (0);
}*/
