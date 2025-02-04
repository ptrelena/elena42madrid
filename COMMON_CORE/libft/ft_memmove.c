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

/* Copies len bytes from string src to string dst. Returns the original value
of dst.*/

// Incluímos nuestra librería
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (s >= d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while ((i + 1) > 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (d);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Cerezas";
	char str2[] = "PicotaTeta";
	printf("%s Propia\n", (char *)ft_memmove(str1, str2, 9));
	char str3[] = "Cerezas";
	char str4[] = "PicotaTeta";
	printf("%s Original\n", (char *)memmove(str3, str4, 9));
	return (0);
}