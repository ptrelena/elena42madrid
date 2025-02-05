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
/* void = La función no devuelve nada
*s = Puntero al bloque de memoria que queremos rellenar con ceros.
size_t n = Número de bytes a establecer en cero.*/

// Incluímos nuestra librería
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*t;

	t = ((unsigned char *)s);

	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char str[5] = "Elena";
	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
}*/