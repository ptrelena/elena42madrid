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

#include "libft.h"

/// @brief s1 & s2 cmp in 'n' first bytes
/// @param s1
/// @param s2
/// @param n
/// @return 0 if equal / s1-s2 if different
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/* int main(void)
{
	//same str
	char    a1 [] = "Elena"; //s1
	char    a2 [] = "Elena"; //s2
	//different str
	char    b1 [] = "Elena"; //s1
	char    b2 [] = "Eleno"; //s2
	//shorter str
	char    c1 [] = "Elena"; //s1
	char    c2 [] = "Ele"; //s2
	//str longer than n
	char    d1 [] = "Elena"; //s1
	char    d2 [] = "ElenoElena123"; //s2
	//different str
	char    e1 [] = "Elena"; //s1
	char    e2 [] = "Javier"; //s2
	//lowercase, uppercase
	char    f1 [] = "ELENA"; //s1
	char    f2 [] = "elena"; //s2
	//numbers
	char    g1 [] = "123"; //s1
	char    g2 [] = "124"; //s2
	//empty str
	char    h1 [] = "Elena"; //s1
	char    h2 [] = ""; //s2
	size_t  m = 10; //n

	printf("a: %i\n", ft_strncmp(a1, a2, m));
	printf("b: %i\n", ft_strncmp(b1, b2, m));
	printf("c: %i\n", ft_strncmp(c1, c2, m));
	printf("d: %i\n", ft_strncmp(d1, d2, m));
	printf("e: %i\n", ft_strncmp(e1, e2, m));
	printf("f: %i\n", ft_strncmp(f1, f2, m));
	printf("g: %i\n", ft_strncmp(g1, g2, m));
	printf("h: %i\n", ft_strncmp(h1, h2, m));
	return (0);
} */