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

//malloc - assigns mem during ft execution
/// @brief mem for variable = count * size
/// @param count - variable length 
/// @param size - variable size
/// @return ptr with mem
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr; //ptr to be returned

	if (count == 0 || size == 0) //nothing to save mem for
		return (calloc(1,1)); //1 byte mem to return 'smth'
	ptr = malloc(count * size); //count*size = total bytes length
	if (!ptr) //ptrs are compared with 'NULL' not '\0'
		return (NULL);
	ft_bzero(ptr, (count * size)); //fill mem with 0
	return (ptr);
}

// int	main(void)
// {
// 	size_t	a = 5; //count
// 	size_t	b = 3; //size

// 	printf("%p\n", ft_calloc(a, b));
// 	return (0);
// }