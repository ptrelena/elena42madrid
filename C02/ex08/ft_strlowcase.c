/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:45:43 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/25 09:16:31 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str [] = "HELLO";

	printf("%s", ft_strlowcase(str));
	return (0);
}*/
