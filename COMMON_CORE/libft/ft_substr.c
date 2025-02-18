/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:46 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:46 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*r;

	if (!s) //initial str not exists
		return (NULL);
	if (start >= ft_strlen(s)) //nowhere to start from
		return(strdup("")); //create & copy space for NULL
	if (len > (ft_strlen(s) - start)) //bytes to copy > bytes left to copy
		len = ft_strlen(s) - start; //copy only what's left to copy
	r = malloc(sizeof(char) * (len + 1)); //create space for new str + '\0'
	if (!r)
		return (NULL);
	i = 0; //counter to loop new str
	while (len > i) //loop until end of len is reached
	{
		r[i] = s[start]; //copy s in new str from start
		i++;
		start++;
	}
	r[i] = '\0'; //add NULL to new str end
	return(r);
}

// int	main(void)
// {
// 	char	a [] = "university"; //*s
// 	int	b = 3; //start
// 	size_t	c = 5; //len

// 	printf("%s", ft_substr(a, b, c));
// 	return(0);
// }