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

#include "libft.h"

char    *ft_strchr(const char *s, int c) 
{
    int i;
    char   cc;
    char   *ss;

    cc = (char)c;
    ss = (char *)s;
    i = 0;
    while (ss[i] != '\0')
    {
        if (ss[i] == cc)
            return (&ss[i]); // '&' pointer exact position
        i++;
    }

    if (cc == '\0')
        return (&ss[i]);

    return (NULL);
}


// int main()
// {
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
//     //char appears in different words - returns char first appearance
//     char    f1 [] = "Piscine end"; //'*s'
//     int     f2 = 'e'; //'c'

//     printf("a: %s\n", ft_strchr(a1, a2));
//     printf("b: %s\n", ft_strchr(b1, b2));
//     printf("c: %s\n", ft_strchr(c1, c2));
//     printf("d: %s\n", ft_strchr(d1, d2));
//     printf("e: %s\n", ft_strchr(e1, e2));
//     printf("f: %s\n", ft_strchr(f1, f2));
//     return (0);
// }
