/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:24:44 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:24:44 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts an upper-case letter to the corresponding lower-case letter. 
The argument must be representable as an unsigned char or the value of EOF.*/

// Incluímos nuestra librería
#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z'){
        c = c + 32;
    }
    else
        return (c);
    return (c);
}

/*
int main()
{
    int a;
    int b;

    a = 'a';
    b = 'B';
    printf ("%c", ft_tolower(a));
    printf ("%c", ft_tolower(b));
    return (0);
}*/