/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 18:00:26 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 18:00:26 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Computes the length of the string s. Returns the number of characters that
precede the terminating NUL character */

// Incluímos nuestra librería
#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int lenght;

    lenght = 0;
    while (s[lenght] != '\0')
    {
        lenght ++;
    }
    return (lenght);
}


int main()
{
    char    str [] = "Cristina";
    int v_lenght;

    v_lenght = ft_strlen(str);
    printf("Char lenght: %d", v_lenght);
    return (0);
}