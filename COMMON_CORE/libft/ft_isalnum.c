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

// Llamamos a nuestra librería
#include "libft.h"

// Llamamos a las librerías necesarias
#include <ctype.h>
#include <stdio.h>

// Escribimos el prototipo de la función indicado en el manual
int ft_isalnum(int c)
{
    while (c != '\0')
    {
        if (c >= 65 && c <= 90)
            return (1);
        if (c >= 97 && c <= 122)
            return (1);
        if (c >= 0 && c <= 9)
            return (1);
        return (0);
    }
    return (0);
}

int main(void)
{
    int a;
    int b;
    int c;

    a = '@';
    b = 'A';
    c = 5;
    printf("%d", ft_isalnum(a));
    printf("%d", ft_isalnum(b));
    printf("%d", ft_isalnum(c));
    return (0);
}