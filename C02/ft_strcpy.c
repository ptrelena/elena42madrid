/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:20:01 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/20 10:21:31 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int size;
	int i;

	i = 0;
	size = 5;
	while (i < size && src[i] != '\0')
	{   
		dest[i] = src[i];
		i++;
	}   
}

ELENA
int	main()
{
	char    *src;
	char    *dest;
	char    src [] = "hello";
	char    dest []; 
	int size;

	size = 5;
	*ft_strcpy(dest, src);
	printf("%c", b); 
	return 0;
}

