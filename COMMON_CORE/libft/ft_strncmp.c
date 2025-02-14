/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:58:14 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:58:14 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    //no counter as n is going to work as one
    unsigned char   *t1; //unsigned char for s1
    unsigned char   *t2; //unsigned char for s2

    t1 = (unsigned char *)s1; //t1 assigned to s1
    t2 = (unsigned char *)s2; //t2 assigned to s2
    while (n > 0 && *t1 != '\0' && *t2 != '\0')
    {
        if (*t1 != *t2)
            return (*t1 - *t2);
        t1++; //keep looping for different values
        t2++; //keep looping for different values
        n--; //loop backwards until reaches 1
    }
    return (0);
}

// int main(void)
// {
//     char    a [] = "Elena"; //s1
//     char    b [] = "Alex"; //s2
//     size_t  c = 4; //n

//     printf("%i\n", ft_strncmp(a, b, c)); //call ft
//     return (0); //void ft
// }