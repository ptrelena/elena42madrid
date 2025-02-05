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

/* Writes len bytes of value c (converted to an unsigned char) to the string b.
Returns its first argument.*/

// Incluímos nuestra librería
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


#include <stdio.h>
int	main(void)
{
	char str[8] = "Elena";
	printf("%s", str);
	ft_memset(str, '*', 2);
	//ft_memset(str+2, '*', 2);
	printf("%s", str);
	return (0);
}
/* Lo que cambias en el ptr también se cambia en la str porque no está
haciendo una copia, esta está apuntando a esa dirección de memoria. */