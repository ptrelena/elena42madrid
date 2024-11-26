/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:08:34 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/26 11:10:47 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
		else
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str [] = "";
	char	str1 [] = "ABC";
	char	str2 [] = "abc";
	char	str3 [] = "123";
	char	str4 [] = " ";
	
	printf("%d", ft_str_is_alpha(str));
	printf("%d", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(str2));
	printf("%d", ft_str_is_alpha(str3));
	printf("%d", ft_str_is_alpha(str4));
	return (0);
}*/
