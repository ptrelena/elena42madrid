/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:23:57 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:23:57 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Incluímos nuestra librería
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z'){
        c = c - 32;
        return(c);
        }
    else if (c >= 'A' && c <= 'Z')
        return (c);
    else
        return (0);
}

/*
int main()
{
    int a;
    int b;

    a = 'a';
    b = 'B';
    printf ("%c", ft_toupper(a));
    printf ("%c", ft_toupper(b));
    return (0);
}*/