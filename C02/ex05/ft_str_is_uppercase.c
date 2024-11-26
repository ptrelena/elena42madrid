/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:44:34 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/26 10:57:51 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
    char str[] = "ELENA";
    char str1[] = "Elena";
    char str2[] = "elena";
    char str3[] = "ELENA1";
    char str4[] = "123";
    char str5[] = "";

    printf("%d\n", ft_str_is_uppercase(str));
    printf("%d\n", ft_str_is_uppercase(str1));
    printf("%d\n", ft_str_is_uppercase(str2));
    printf("%d\n", ft_str_is_uppercase(str3));
    printf("%d\n", ft_str_is_uppercase(str4));
    printf("%d\n", ft_str_is_uppercase(str5));
    return (0);
}*/
