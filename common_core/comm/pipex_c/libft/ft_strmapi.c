/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:41 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:41 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief iterates s applying f
/// @param s
/// @param f
/// @return new ptr after applying f
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*t;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	t = malloc((sizeof(char) * (len)) + 1);
	if (!t)
		return (NULL);
	i = 0;
	while (i < len)
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[len] = '\0';
	return (t);
}

/* char ft_to_upper_or_lower(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (toupper(c)); //uppercase if even
	return (tolower(c));  //lowercase if odd
}

int	main(void)
{
	char	a [] = "I like programming a lot";
	printf("%s\n", ft_strmapi(a, ft_to_upper_or_lower));
	return (0);
} */