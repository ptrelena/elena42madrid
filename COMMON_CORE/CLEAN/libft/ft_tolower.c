/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:24:44 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:24:44 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief converts to lowercase
/// @param c
/// @return lowercase c
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	else
		return (c);
	return (c);
}

/*
int	main(void)
{
	int a = 'a';
	int b = 'B';

	printf ("%c", ft_tolower(a));
	printf ("%c", ft_tolower(b));
	return (0);
}*/