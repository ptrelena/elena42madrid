/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:44:14 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/26 11:18:48 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			return (1);
		else
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str [] = "abc";
	char	str1 [] = "ABC";
	char	str2 [] = "123";
	char	str3 [] = " ";
	char	str4 [] = "";

	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
	printf("%d", ft_str_is_lowercase(str4));
	return (0);
}*/
