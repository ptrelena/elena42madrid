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

// Llamamos a nuestra librería
#include "libft.h"

// Llamamos a las librerías necesarias
#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    while (c != '\0')
    {
        if (c >= 101 && c <= 170)
            return (1);
    }
    return(0);
}

int main(void)
{
    int c;
	
    c = 'E';
	printf("%d", ft_isalpha(c));
	return (0);
}
