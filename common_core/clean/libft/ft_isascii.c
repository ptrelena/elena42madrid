/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 17:06:15 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 17:06:15 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief check if int ascii character
/// @param c
/// @return 1 if TRUE, 0 if FALSE
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int a = 'a';
	int b = 'A';
	int c = '1';
	int d = '@';
	unsigned char   e = 164; //num ascii for 'ñ'

	printf("%d", ft_isascii(a));
	printf("%d", ft_isascii(b));
	printf("%d", ft_isascii(c));
	printf("%d", ft_isascii(d));
	printf("%d", ft_isascii(e));
	return (0);
}*/