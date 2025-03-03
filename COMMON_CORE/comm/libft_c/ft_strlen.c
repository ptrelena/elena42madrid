/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 18:00:26 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 18:00:26 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief calculate s length
/// @param s
/// @return length
size_t	ft_strlen(const char *s)
{
	int	lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/*
int	main(void)
{
	char    str [] = "Cristina";
	int v_lenght;

	v_lenght = ft_strlen(str);
	printf("Char lenght: %d", v_lenght);
	return (0);
}*/