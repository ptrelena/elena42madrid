/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:16:33 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:16:33 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n) //ft prototype
{
	size_t	i; //set counter as size_t to compare it with n
	unsigned char *str; //new pointer to simplify code

	str = (unsigned char *)s; //simplify code

	i = 0; //counter starts
	while (i < n) //loop srt until i reaches n
	{
		str[i] = 0; //change char 0
		i++; //keep looping
	}
	return; //nothing to return as it is a void ft
}

// int	main(void)
// {
// 	char	str [] = "Elena"; //create a pointer variable
// 	size_t	n = 5; //create n variable 

// 	printf("%s\n", str); //print str before bzero
// 	ft_bzero(str, n); //call ft
// 	printf("%s\n", str); //print str after bzero
// 	return (0);
// }

// bzero = memset, setting c = 0