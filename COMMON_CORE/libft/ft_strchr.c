/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:56:04 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:56:04 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence of c (converted to a char) in the string pointed to by s. If c is ‘\0’, the functions locate the terminating ‘\0’. 
Returns a pointer to the located character, or NULL if the character does not appear in the string */

// Incluímos nuestra librería
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]); // Se usa el '&' para indicar la posición exacta del puntero
        i++;
    }

    if ((char)c == '\0')
        return ((char *)&s[i]);

    return (0);
}
/*
int main()
{
    printf("%c", *ft_strchr("Hola", 'o'));
    return (0);
}*/
