/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 16:53:16 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 16:53:16 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief check if int alphanumeric character
/// @param c
/// @return 1 if TRUE, 0 if FALSE
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int a = '@';
	int b = 'A';
	int c = '5';

	printf("%d", ft_isalnum(a));
	printf("%d", ft_isalnum(b));
	printf("%d", ft_isalnum(c));
	return (0);
}*/
