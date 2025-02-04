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

/* Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.
Incluye bytes '0' al string apuntado por s. */

// Incluímos nuestra librería
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
#include <stdio.h>
int	main(void)
{
	char str[10] = "patatita";
	printf("%s\n", str);
	ft_bzero(str, 10);
	printf("%s\n", str);
}