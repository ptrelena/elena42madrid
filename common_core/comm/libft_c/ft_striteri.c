/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:34 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:34 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief iterates s applying f
/// @param s
/// @param f
/// @return void
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_toupper_s(unsigned int j, char* t)
{
	while (t[j] != '\0')
	{
		if (t[j] >= 'a' && t[j] <= 'z')
			t[j] = t[j] - 32;
		j++;
	}
}

int	main(void)
{
	char	a [] = "I like programming a lot";
	ft_striteri(a, ft_toupper_s);
	printf("%s", a);
	return (0);
} */
