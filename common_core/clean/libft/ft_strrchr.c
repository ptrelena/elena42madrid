/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:57:19 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:57:19 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief locates last occurrence of c in s
/// @param s
/// @param c
/// @return ptr to location of c
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/* int main()
{
	//char in str - returns found char
	char    a1 [] = "Piscine"; //'*s'
	int     a2 = 's'; //'c'
	//char in first position - returns str beginning
	char    b1 [] = "Piscine"; //'*s'
	int     b2 = 'P'; //'c'
	//char not in str - returns NULL
	char    c1 [] = "Piscine"; //'*s'
	int     c2 = 'z'; //'c'
	//NULL - returns str ending
	char    d1 [] = "Piscine"; //'*s'
	int     d2 = '\0'; //'c'
	//char appears several times - returns char first appearance
	char    e1 [] = "Piscine"; //'*s'
	int     e2 = 'i'; //'c'
	//char appears in different words - returns char first appearance
	char    f1 [] = "Piscine end"; //'*s'
	int     f2 = 'e'; //'c'

	printf("a: %c\n", *ft_strrchr(a1, a2));
	printf("b: %c\n", *ft_strrchr(b1, b2));
	printf("d: %c\n", *ft_strrchr(d1, d2));
	printf("e: %c\n", *ft_strrchr(e1, e2));
	printf("f: %c\n", *ft_strrchr(f1, f2));
	printf("c: %c\n", *ft_strrchr(c1, c2));
	return (0);
} */
