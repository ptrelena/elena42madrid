/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 13:23:57 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 13:23:57 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief converts to uppercase
/// @param c
/// @return uppercase c
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	else
		return (c);
	return (c);
}

/*
int	main(void)
{
	int a = 'a';
	int b = 'B';

	printf ("%c", ft_toupper(a));
	printf ("%c", ft_toupper(b));
	return (0);
}*/