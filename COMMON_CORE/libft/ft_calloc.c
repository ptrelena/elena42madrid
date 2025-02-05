/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:05:17 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:05:17 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Contiguously allocates enough space for count objects that are size bytes of
memory each and returns a pointer to the allocated memory. The allocated memory
is filled with bytes of value zero. */

// Incluímos nuestra librería
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	printf("%p\n", ft_calloc(2, 2));
	printf("%s\n", (char *)ft_calloc( 2, 2));
	printf("%p\n", calloc( 2, 2));
	return(0);
}