/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 10:52:01 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-04 10:52:01 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief allocates mem for s1 + copies it
/// @param *s1
/// @return ptr to char copy
char	*ft_strdup(const char *s1)
{
	char *p;  // ptr to return s1 value
	char *t1; // cast *s1
	int i;    // counter
	t1 = (char *)s1;
	i = 0; // counter starts
	// assign mem for ptr - len * size + 1 ('\0')
	p = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!t1) // nothing to save mem for
		return (NULL);
	if (!p) // nothing to save mem for
		return (NULL);
	while (t1[i] != '\0') // copy s1 in ptr
	{
		p[i] = t1[i];
		i++;
	}
	p[i] = '\0'; // add final NULL
	return (p);  // return ptr containing s1
}

/* int	main(void)
{
	char	a [] = "Elenita"; //*s1

	printf("%s", ft_strdup(a));
	return (0);
} */
