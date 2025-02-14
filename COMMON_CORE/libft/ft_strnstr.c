/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:03:05 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:03:05 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Locates the first occurrence of the null-terminated string needle in the
string haystack, where not more than len characters are searched. Characters
that appear after a ‘\0’ character are not searched.  Since the strnstr()
function is a FreeBSD specific API, it should only be used when portability is
not a concern. If needle is an empty string, haystack is returned; if needle
occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first
character of the first occurrence of needle is returned.*/

/*str little se busca en str big y se devuelve desde ese punto el que se encuentra
el nuero de bytes definido por len*/

//include library
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (*little == '\0')
		return(big);
	
	while(*big != '\0')
	{
		big++;
		while (little != '\0')
			little++;

	}

}
