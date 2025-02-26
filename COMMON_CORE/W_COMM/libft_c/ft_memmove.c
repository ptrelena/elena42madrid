/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:19:31 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:19:31 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copy from src to dst 'len' bytes
/// @param dst 
/// @param src 
/// @param len 
/// @return dst
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i; //counter

	if (len == 0 || dst == src) //nothing to copy/compare
			return (dst);
	if ((const unsigned char *)src > (const unsigned char *)dst)
	{//if src longer than dst
		i = 0; //counter
		while (i < len)
		{//copy src in dst forward
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{//if src shorter than dst
		i = len;
		while (i > 0)
		{//copy dst in src backwards - 1 for NULL
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

/* int	main(void)
{
	char	a [] = "Elena Juana"; //dest
	char	b [] = "Maria"; //src
	size_t	c = 5; //number of bytes to copy

	printf("%s\n", a); //dest before memmove
	printf("%s\n", b); //src before memmove
	ft_memmove(a, b, c); //call ft
	printf("%s\n", a); //dest after memmove
	printf("%s\n", b); //src after memmove
	return (0); //void ft
} */
