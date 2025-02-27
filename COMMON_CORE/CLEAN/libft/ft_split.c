/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:30 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:30 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	w_count;

	i = 0;
	w_count = 0;
	if (!s)
		return (-1);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			w_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (w_count);
}

static size_t	ft_count_letters(const char *s, char c)
{
	size_t	l_count;

	l_count = 0;
	while (s[l_count] != '\0' && s[l_count] != c)
		l_count++;
	return (l_count);
}

static char	*ft_printword(char const *s, char c)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = ft_calloc((ft_count_letters(s, c) + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	*ft_freespace(char **arr, size_t delete)
{
	while (delete > 0)
		free(arr[--delete]);
	free(arr);
	return (NULL);
}

/// @brief takes str and stores divided by words in array
/// @param s
/// @param c
/// @return array
char	**ft_split(char const *s, char c)
{
	char	**words_dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words_dst = (char **)ft_calloc(sizeof(char *), ft_count_words(s, c) + 1);
	if (!words_dst)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words_dst[j] = ft_printword((char *)s + i, c);
			if (!words_dst[j])
				return (ft_freespace(words_dst, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	words_dst[j] = NULL;
	return (words_dst);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str = "hello word this is C language";
	char limit = ' ';
	char **result = ft_split(str, limit);

	if (!result)
	{
		printf("error, no mem reserved\n");
		return (1);
	}
	int i = 0;
	while (result[i])
	{
		printf("word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */
