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
	int		i;
	char	*p;
	char	*t1;

	t1 = (char *)s1;
	i = 0;
	p = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!t1)
		return (NULL);
	if (!p)
		return (NULL);
	while (t1[i] != '\0')
	{
		p[i] = t1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/* int	main(void)
{
	char	a [] = "Elenita"; //s1

	printf("%s", ft_strdup(a));
	return (0);
} */
