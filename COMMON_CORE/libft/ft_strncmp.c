/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:58:14 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:58:14 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, 
according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that ‘\200’ is greater than ‘\0’.*/

// Incluímos nuestra librería
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_strncmp("patatita", "patata", 1));
	return(0);
}*/