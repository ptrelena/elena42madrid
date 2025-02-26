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

/// @brief creates new str starting from s and 'len' long
/// @param s 
/// @param start 
/// @param len 
/// @return final str
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	len_s;

	if (!s) //initial str not exists
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s) //nowhere to start from
		return(ft_strdup("")); //create & copy space for NULL
	if (len > len_s - start) //bytes to copy > bytes left to copy
		len = len_s - start; //copy only what's left to copy
	r = malloc(len + 1); //create space for new str + '\0'
	if (!r)
		return (NULL);
	i = 0; //counter to loop new str
	while (i < len) //loop until end of len is reached
	{
		r[i] = s[start + i]; //copy s in new str from start
		i++;
	}
	r[i] = '\0'; //add NULL to new str end
	return(r);
}

/* int	main(void)
{
	char	a [] = "university"; //*s
	int	b = 3; //start
	size_t	c = 5; //len

	printf("%s", ft_substr(a, b, c));
	return(0);
} */