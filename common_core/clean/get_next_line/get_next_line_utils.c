/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-13 14:28:32 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-13 14:28:32 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/// @brief finds ptr of first occurrence of 'c' in 's'
/// @param s
/// @param c
/// @return ptr c position in s
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/// @brief calculate s length
/// @param s
/// @return length
size_t	ft_strlen(const char *s)
{
	int	lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

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

/// @brief creates new str starting from s and 'len' long
/// @param s
/// @param start
/// @param len
/// @return final str
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
