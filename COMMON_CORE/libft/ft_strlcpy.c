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

/*strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in
dstsize.  Also note that strlcpy() and strlcat() only operate on true ''C'' strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src
and dst() must be NUL-terminated.

strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the
original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).*/

// Incluímos nuestra librería
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = strdup("Picota");
	s2 = strdup("Patata");
	printf("%zu\n", ft_strlcpy(s1, s2, 7));
	printf("%s\n", s1);
	free(s1);
	free(s2);
	return(0);
}*/