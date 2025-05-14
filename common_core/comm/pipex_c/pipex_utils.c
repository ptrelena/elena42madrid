/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-09 11:36:52 by elenpere          #+#    #+#             */
/*   Updated: 2025-05-09 11:36:52 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "pipex.h"

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
char	*ft_slashjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	size_t	i;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 2; //2->NULL & '/'
	s3 = malloc(total_len);
	if (!s3)
		return (NULL);
	i = 0;
	while (*s1)
		s3[i++] = *s1++;
	if (*s1 == '\0')
		s3[i++] = '/';
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}

void	ft_free_array(char **array)
{
	int i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}