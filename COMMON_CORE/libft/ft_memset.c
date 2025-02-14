/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 10:13:42 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 10:13:42 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n) //ft prototype
{
	size_t	i; //set counter as size_t to compare it with 'n'
	unsigned char	*a; //new pointer to simplify code
	unsigned char	b; //new variable for int 'c'

	a = (unsigned char *)str; //simplify code
	b = (unsigned char)c; //simplify code

	i = 0; //counter starts
	while (i < n) //loop srt until i reaches n
	{
		a[i] = b; //change char to b = c
		i++; //keep looping
	}
	return(a); //nothing to return as it is a void ft
}

// int	main(void)
// {
// 	unsigned char	a [] = "Elena"; //pointer variable
// 	int	b = 'a'; //modification int
// 	size_t	c = 3; //number of times to modify int 'b'

// 	printf("%s\n", a); //a before memset
// 	ft_memset(a, b, c); //call ft
// 	printf("%s\n", a); //a after memset
// }