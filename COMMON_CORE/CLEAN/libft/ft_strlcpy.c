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

/// @brief copy src in dst 'size' bytes
/// @param dst
/// @param src
/// @param size
/// @return src length
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int main(void)
{
	char    a [] = "Manolo"; //dst
	char    b [] = "Aurelio"; //src
	size_t  c = 3; //'size'

	printf("%s\n", a); //dst before strlcpy
	printf("%s\n", b); //src before strlcpy
	printf("%zu\n", ft_strlcpy(a, b, c)); //call ft
	printf("%s\n", a); //dst after strlcpy
	printf("%s\n", b); //src after strlcpy
	return(0); //void ft
} */