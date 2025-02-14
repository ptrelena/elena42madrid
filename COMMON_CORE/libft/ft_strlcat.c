/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:20:26 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:20:26 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i; //counter
    size_t  dstlen; //length dst
    size_t total_len; //dst + src length
    unsigned char   *s;

    i = 0;//counter starts
    dstlen = ft_strlen(dst); //define dstlen
    s = (unsigned char *)src; //define s
    while((s[i] =! '\0') && (i < (size - 1))) 
    {
        dst[(dstlen + i)] = s[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    total_len = dstlen + ft_strlen(src);
    return (total_len);
}

// int main(void)
// {
//     char    a [] = "Manolo"; //dst
//     char    b [] = "Aurelio"; //src
//     size_t  c = 3; //size

//     printf("%s\n", a); //dst before strlcat
//     printf("%s\n", b); //src before strlcat
//     printf("%zu\n", ft_strlcat(a, b, c)); //call ft
//     printf("%s\n", a); //dst after strlcat
//     printf("%s\n", b); //src after strlcat
//     return (0); //void ft
// }
