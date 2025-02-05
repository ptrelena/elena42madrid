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

// Incluímos nuestra librería
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*o;
	unsigned char		ch;

	o = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (o[i] == ch)
		{
			return ((void *)&o[i]);
		}
		i++;
	}
	return (NULL);
}


#include <stdio.h>
int	main(void)
{
	printf("%s\n", (char *) ft_memchr("Elena", 'l', 6));
	return (0);
}