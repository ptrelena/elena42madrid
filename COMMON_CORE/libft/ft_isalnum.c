/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 16:53:16 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 16:53:16 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isalnum() function tests for any character for which isalpha(3) or 
isdigit(3) is true. The value of the argument must be representable as an 
unsigned char or thevalue of EOF */

// Llamamos a nuestra librería
#include "libft.h"

// Escribimos el prototipo de la función indicado en el manual
int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
        || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}


int main(void)
{
    int a;
    int b;
    int c;

    a = '@';
    b = 'A';
    c = '5';
    printf("%d", ft_isalnum(a));
    printf("%d", ft_isalnum(b));
    printf("%d", ft_isalnum(c));
    return (0);
}
