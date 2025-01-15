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

// Incluímos nuestra librería
#include "libft.h"

// Incluímos las librerías necesarias
#include <ctype.h>
#include <stdio.h>

// Escribimos el prototipo de la función indicado en el manual
int ft_isdigit(int c)
{
    while (c != '\0')
    {
        if (c >= 0 && c <= 9)
            return (1);
        return (0);
    }
    return (0);
}

// Escribimos la main funciton
int main(void)
{
    int c;

    c = 'a';
    printf("%d", ft_isdigit(c));
	return (0);
}
