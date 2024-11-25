/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:46:03 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/25 10:45:16 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sumstr(char	*str)
{
	int	i;

	i = 0;
	str[i + 1] = str [i + 1] - 32;
	i++;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if ((str[0] >= 97) && (str[0] <= 122))
			str[0] = str [0] - 32;
			i++;
		if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
			str[i] = str [i];
			i++;
		if ((str[i] >= 32) && (str[i] <= 47))
			sumstr(str);
		if ((str[i] >= 58) && (str[i] <= 64))
			sumstr(str);
		if ((str[i] >= 91) && (str[i] <= 96))
			sumstr(str);
		if ((str[i] >= 123) && (str[i] <= 126))
			sumstr(str);
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char	str [] = "salut, comment tu vas ? 42mots quarante-deux";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
