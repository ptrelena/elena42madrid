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

#include "libft.h"

// malloc - assigns mem during ft execution
/// @brief mem for variable = count * size
/// @param count - variable length
/// @param size - variable size
/// @return ptr with mem
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

/* int	main(void)
{
	size_t	a = 5; //count
	size_t	b = 3; //size

	printf("%p\n", ft_calloc(a, b));
	return (0);
} */