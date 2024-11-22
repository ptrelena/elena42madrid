/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:44:56 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/21 10:44:59 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 31) || (str[i] == 127))
			return (1);
		else
			return (0);
		i++;
	}
	return(1);
}
/*
#include <stdio.h>

int	main()
{
	char	str [] = "\n";

	printf("%d", ft_str_is_printable(str));
	return (0);
}*/
