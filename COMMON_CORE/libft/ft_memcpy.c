/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:18:36 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:18:36 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dst. Returns the original
value of dst.*/

//include library
#include "libft.h"


//const void* “pointer to an unknown data type that cannot be modified”

/// @brief copy data from src to dest
/// @param dest 
/// @param src declared as 'const void*', data won't be modified in src
/// @param n number of bytes to be copied
/// @return void

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	i = 0;
	while (i < n)
	{
		d[i] = s[i]; //copy first byte from src to dest
		i++; //keep looping
	}
	return (d);
}

// int	main(void)
// {
// 	char	src [] = "Elena";
// 	char	dest [] = "Juana";
// 	size_t	n = 2;

// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	ft_memcpy(dest, src, n);
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	return(0);
// }
