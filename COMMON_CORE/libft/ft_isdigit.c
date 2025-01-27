/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 16:17:42 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 16:17:42 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes only characters from 0-9 */

// Incluímos nuestra librería
#include "libft.h"

// Escribimos el prototipo de la función indicado en el manual
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/*
int main(void)
{
    int a;
    int b;
    int c;

    a = 'a';
    b = 'A';
    c = '1';
    printf("%d", ft_isdigit(a));
    printf("%d", ft_isdigit(b));
    printf("%d", ft_isdigit(c));
	return (0);
}*/
