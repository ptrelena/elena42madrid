/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:44:34 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/21 10:44:37 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'A') && (str[i] < 'Z'))
			return (1);
		else
			return (0);
		i++;
	}
	return(1);
}

#include <stdio.h>

int	main()
{
	char	str [20] = "ELENA";
	char	str1 [20] = "Elena";
	char	str2 [20] = "elena";
	char	str3 [20] = "ELENA1";
	char	str4 [20] = "123";

	printf("%d", ft_str_is_uppercase(str));
	printf("%d", ft_str_is_uppercase(str1));
	printf("%d", ft_str_is_uppercase(str2));
	printf("%d", ft_str_is_uppercase(str3));
	printf("%d", ft_str_is_uppercase(str4));
	return (0);
}
