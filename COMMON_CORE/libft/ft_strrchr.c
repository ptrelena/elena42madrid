/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:57:19 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:57:19 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Incluímos nuestra librería
#include "libft.h"

char   *ft_strrchr(const char *s, int c)
{
int	len;
int	i;

len = ft_strlen(s);
while (s[len] != '\0')
{
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	len--;
}

i = 0;
if (s[i] == '\0')
	return((char *)&s[i]);

return (0);
}

int	main ()
{
	printf("%c", *ft_strrchr("Elena", 'n'));
	return (0);
}