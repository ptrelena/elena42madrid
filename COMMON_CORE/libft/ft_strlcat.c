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

/*strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in
dstsize.  Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src
and dst() must be NUL-terminated.

strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the
original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).*/

// Incluímos nuestra librería
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + size);
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = strdup("Patatita");
	char *str2 = strdup("Rica");
	printf("%zu\n", ft_strlcat(str1, str2, 2));
	printf("%s\n", str1);
	char *str3 = strdup("Patatita");
	char *str4 = strdup("Rica");
	printf("%zu\n", strlcat(str3, str4, 2));
	printf("%s\n", str3);
	return(0);
}*/