/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:03:05 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:03:05 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief finds little in big
/// @param big
/// @param little
/// @param len
/// @return
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[j + i] == little[j]) && ((i + j) < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	//equal little
	char	a1 [] = "Street"; //big
	char	a2 [] = "Str"; //little
	//different little
	char	b1 [] = "Street"; //big
	char	b2 [] = "tree"; //little
	//equal little lowercase
	char	c1 [] = "Street"; //big
	char	c2 [] = "str"; //little
	size_t	t = 3; //len

	printf("%s\n", ft_strnstr(a1, a2, t));
	printf("%s\n", ft_strnstr(b1, b2, t));
	printf("%s\n", ft_strnstr(c1, c2, t));
	return (0);
} */
