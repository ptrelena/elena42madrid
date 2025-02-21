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

#include "libft.h"

//const void* “pointer to an unknown data type that cannot be modified”
/// @brief copy data from src to dest
/// @param dest 
/// @param src declared as 'const void*', data won't be modified in src
/// @param n number of bytes to be copied
/// @return void

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i; //counter
	unsigned char	*d; //new dest pointer to simplify code
	unsigned char	*s; //new src pointer to simplify code
	d = (unsigned char *)dest; //simplify code
	s = (unsigned char *)src; //simplify code

	if (d == s || n <= 0)
		return (dest);
	i = 0; //counter
	while (i < n)//loop unil reaches 'n'
	{
		d[i] = s[i]; //copy first byte from src to dest
		i++; //keep looping
	}
	return (d);//returns d = dest value
}

// int	main(void)
// {
// 	char	a [] = "Elena"; //dest
// 	char	b [] = "Juana"; //src
// 	size_t	c = 2; //number of bytes to be copied

// 	printf("%s\n", a); //dest before memcpp
// 	printf("%s\n", b); //src before memcpp
// 	ft_memcpy(a, b, c); //call ft
// 	printf("%s\n", a); //dest after memcpp
// 	printf("%s\n", b); //src after memcpp
// 	return(0); //void ft
// }
