/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:43 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:43 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief loops s1 fordward & backwards until set found
/// @param s1
/// @param set
/// @return new pointer without 'set'
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && (start <= end))
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && (end >= 0))
		end--;
	s2 = malloc(end - start + 2);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, &s1[start], end - start + 2);
	return (s2);
}

/* int	main(void)
{
	char	a [] = "hello my name is Elena hello Jimenahello"; //s1
	char	b [] = "hello"; //set
	printf("%s\n", ft_strtrim(a, b));
	return (0);
} */