/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 10:52:01 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-04 10:52:01 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief allocates mem for s1 + copies it
/// @param *s1
/// @return ptr to char copy
char	*ft_strdup(const char *s1)
{
	char	*t1; //ptr to return s1 value
	int		i; //counter

	i = 0; //counter starts
	if (s1 == NULL) //nothing to save mem for
		return(NULL);
	t1 = malloc(ft_strlen(s1) * sizeof(char) + 1);
	//assign mem for ptr - len * size + 1 ('\0')
	if (t1 == NULL) //nothing to save mem for
	{
		return(NULL);
	}
	while (s1[i] != '\0') //copy s1 in ptr
	{
		t1[i] = s1[i];
		i++;
	}
	t1[i] = '\0'; //add final NULL
	return (t1); //return ptr containing s1
}

// int	main(void)
// {
// 	char	a [] = "Elenita"; //*s1

// 	printf("%s", ft_strdup(a));
// 	return (0);
// }
