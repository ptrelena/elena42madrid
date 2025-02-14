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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i; //counter
	unsigned char	*d; //new dest pointer to simplify code
	unsigned char	*s; //new src pointer to simplify code
	d = (unsigned char *)dest; //simplify code
	s = (unsigned char *)src; //simplify code

	i = 0; //counter
	if (s >= d) //copy from front to end
	{
		while (i < n) //loop until n-1
		{
			d[i] = s[i]; //copy src in dest
			i++; //keep looping
		}
	}
	else //copy from end to front
	{
		i = n - 1; //n-1 = last byte position to copy
		while ((i + 1) > 0) //i+1 = number of bytes to copy
		{
			d[i] = s[i]; //copy src in dest
			i--; //keep looping backwards
		}
	}
	return (d); //return dest
}

// int	main(void)
// {
// 	char	a [] = "Elena Juana"; //dest
// 	char	b [] = "Maria"; //src
// 	size_t	c = 5; //number of bytes to copy

// 	printf("%s\n", a); //dest before memmove
// 	printf("%s\n", b); //src before memmove
// 	ft_memmove(a, b, c); //call ft
// 	printf("%s\n", a); //dest after memmove
// 	printf("%s\n", b); //src after memmove
// 	return (0); //void ft
// }
