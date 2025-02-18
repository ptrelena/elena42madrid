/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:02:23 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:02:23 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i; //counter
    unsigned char   *t1;//change const void to unsigned char
    unsigned char   *t2;//change const void to unsigned char

    i = 0;//counter starts
    t1 = (unsigned char *)s1;//s1 value assigned to t1
    t2 = (unsigned char *)s2;//s2 value assigned to t2
    while (i < n) //loop till counter reaches 'n' value
    {
        if (t1[i] != t2[i])//t1 byte different to t2 byte
            return (t1[i] - t2[i]);
            //t1 -t2
        i++;//keep looping when t1 = t2
    }
    if (t1[i] == t2[i])//while above not working means t1 = t2
        return (0); // 0 when t1 = t2
    return(0);
}
/* 
int main(void)
{
    //same str - return 0
    char   a1 [] = "ElenaElenita"; //s1
    char    a2 [] = "ElenaElenita"; //s2
    //different str
    char    b1 [] = "ElenaElenita"; //s1
    char    b2 [] = "CarlosCarlitos"; //s2
    //str including NULL
    char    c1 [] = "ElenaElenita"; //s1
    char    c2 [] = "Elenita'\0'Carlos"; //s2
    size_t  z = 10; //n

    printf("a: %d\n", ft_memcmp(a1, a2, z));
    printf("b: %d\n", ft_memcmp(b1, b2, z));
    printf("c: %d\n", ft_memcmp(c1, c2, z));
    return (0);
} */