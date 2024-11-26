/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:44:56 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/26 11:24:04 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 31) || (str[i] == 127))
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
	char	str5 [] = "\n";
	char	str6 [] = "ç";

	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
	printf("%d", ft_str_is_printable(str3));
	printf("%d", ft_str_is_printable(str4));
	printf("%d", ft_str_is_printable(str5));
	printf("%d", ft_str_is_printable(str6));
	return (0);
}*/
