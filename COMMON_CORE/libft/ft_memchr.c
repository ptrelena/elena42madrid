/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:59:41 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:59:41 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence of c (converted to an unsigned char) in string
s. Returns a pointer to the byte located, or NULL if no such byte exists within
n bytes.*/

//include library
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char   cc;
    unsigned char   *ss;

    cc = (unsigned char)c;
    ss = (unsigned char *)s;
    i = 0;
    while ((i < n) && (ss[i] != '\0'))
    {
        if (ss[i] == cc)
            return (&ss[i]); // '&' pointer exact position
        i++;
    }

    if (cc == '\0')
        return (&ss[i]);

    return (ss);
}


// int main(void)
// {
//     size_t t = 4; //'n'
//     //char in str - returns found char
//     char    a1 [] = "Piscine"; //'*s'
//     int     a2 = 's'; //'c'
//     //char in first position - returns str beginning
//     char    b1 [] = "Piscine"; //'*s'
//     int     b2 = 'P'; //'c'
//     //char not in str - returns NULL
//     char    c1 [] = "Piscine"; //'*s'
//     int     c2 = 'z'; //'c'
//     //NULL - returns str ending
//     char    d1 [] = "Piscine"; //'*s'
//     int     d2 = '\0'; //'c'
//     //char appears several times - returns char first appearance
//     char    e1 [] = "Piscine"; //'*s'
//     int     e2 = 'i'; //'c'

//     printf("a: %p\n", a1);
//     printf("a: %p\n",ft_memchr(a1, a2, t));
//     printf("b: %p\n", b1);
//     printf("b: %p\n",ft_memchr(b1, b2, t));
//     printf("c: %p\n", c1);
//     printf("c: %p\n",ft_memchr(c1, c2, t));
//     printf("d: %p\n", d1);
//     printf("d: %p\n",ft_memchr(d1, d2, t));
//     printf("e: %p\n", e1);
//     printf("e: %p\n",ft_memchr(e1, e2, t));
//     return (0);
// }