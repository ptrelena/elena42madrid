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

/*strlcpy() and strlcat() take the full size of the destination buffer and
guarantee NUL-termination if there is room.  Note that room for the NUL should
be included in dstsize.  Also note that strlcpy() and strlcat() only operate on
true ''C'' strings. This means that for strlcpy() src must be NUL-terminated
and for strlcat() both src and dst() must be NUL-terminated.

strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.

strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in practice
this should not happen as it means that either dstsize is incorrect or that dst
is not a proper string).*/

//include library
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dstlen;
    size_t total_len;
    unsigned char   *s;

    i = 0;
    dstlen = ft_strlen(dst);
    s = (unsigned char *)src;
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
