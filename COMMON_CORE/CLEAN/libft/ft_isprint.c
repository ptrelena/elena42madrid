/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 17:53:52 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 17:53:52 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief check if int printable character
/// @param c
/// @return 1 if TRUE, 0 if FALSE
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*
int	main(void)
{
	int a = 'a';
	int b = 'A';
	int c = '1';
	int d = '=';
	int e = 128; //ascii num for 'Ç' (not printable)

	printf("%d", ft_isprint(a));
	printf("%d", ft_isprint(b));
	printf("%d", ft_isprint(c));
	printf("%d", ft_isprint(d));
	printf("%d", ft_isprint(e));
	return (0);
}*/