/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 11:44:02 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 11:44:02 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief check if int alphabetic character
/// @param c
/// @return 1 if TRUE, 0 if FALSE
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int main(void)
{
	int a = 'e'; //lowercase
	int b = 'E'; //uppercase
	int c = '3'; //number
	int d = ' '; //space
	int e = '@'; //special char

	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", ft_isalpha(e));
	return (0); //void ft
} */
