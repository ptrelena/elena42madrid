/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:35:26 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:47:30 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*
int	main()
{
	char	str[6] = "hello";
	int	v_strlen;

	v_strlen = ft_strlen(str);
	printf("The string's length is %i characters", v_strlen);
	return (0);
}*/
