/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:38 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:38 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief join s1 & s2
/// @param s1
/// @param s2
/// @return new ptr w resulting join
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1 && !s2)
		return (NULL);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (ft_strlen(s1) > i)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (ft_strlen(s2) > j)
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

/* int	main(void)
{
	char	a [] = "Elena"; //s1
	char	b [] = "Perez"; //s2

	printf("%s", ft_strjoin(a, b));
	return(0);
} */