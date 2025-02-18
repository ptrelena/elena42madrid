/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:09:23 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:09:23 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//const char - src won't be modified
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i; //counter size_t to compare it with 'size'

    i = 0; //counter starts
    if (size < 1)
        return(ft_strlen(src));
    while (src[i] != '\0' && i < (size - 1))
    //loop until end of src & until size -1 (size = '\0')
    {
        dst[i] = src[i]; //copy src in dst
        i++; //keep looping
    }
    dst[i] = '\0'; //add final NULL
    return (ft_strlen(src)); //src bytes length
}

// int main(void)
// {
//     char    a [] = "Manolo"; //dst
//     char    b [] = "Aurelio"; //src
//     size_t  c = 3; //'size'

//     printf("%s\n", a); //dst before strlcpy
//     printf("%s\n", b); //src before strlcpy
//     printf("%zu\n", ft_strlcpy(a, b, c)); //call ft
//     printf("%s\n", a); //dst after strlcpy
//     printf("%s\n", b); //src after strlcpy
//     return(0); //void ft
// }