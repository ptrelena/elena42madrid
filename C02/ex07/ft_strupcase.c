/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:45:21 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/25 09:09:48 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if ((str[i] >= 97) && (str[i] <= 121))
			str[i] = str[i] - 32;
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
	char	str [] = "hello";

	printf("%s", ft_strupcase(str));
	return(0);
}*/
