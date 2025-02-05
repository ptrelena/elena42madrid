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

// Incluímos nuestra librería
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[5] = "Elena";
	char str2[7] = "Alberto";
	printf("%s\n", (char *)ft_memcpy(str1, str2, 14));
	char str3[5] = "Elena";
	char str4[7] = "Alberto";
	printf("%s\n", (char *)memcpy(str3, str4, 14));
	return (0);
}*/