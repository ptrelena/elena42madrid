/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:46:03 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/25 12:14:59 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sumstr(char	*str)
{
	int	i;

	i = 0;
	str[i + 1] = str [i + 1] - 32;
	i++;
}

char	*ft_strlowcase(char *str)
{
	int i;

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = str [i] - 32;
		else if ((str[i] >= 32) && (str[i] <= 47))
					|| ((str[i] >= 32) && (str[i] <= 47))
					|| ((str[i] >= 58) && (str[i] <= 64))
					|| ((str[i] >= 91) && (str[i] <= 96))
					|| ((str[i] >= 123) && (str[i] <= 126))
			sumstr(str);
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
