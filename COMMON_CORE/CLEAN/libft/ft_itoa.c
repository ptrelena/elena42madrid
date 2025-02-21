/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:02:57 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:02:57 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_countnum(int n)
{
	size_t	count;

	if (n > 0)
		count = 0;
	else
		count = 1;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/// @brief change from int to char
/// @param n 
/// @return final char value
char	*ft_itoa(int n)
{
	int		len_str;
	char	*str;
	long	num;

	len_str = ft_countnum(n);
	num = n;
	str = (char *)malloc(len_str + 1);
	if (!str)
		return (NULL);
	str[len_str] = '\0';
	if (n < 0)
		num = -num;
	while (len_str > 0)
	{
		str[--len_str] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	int n = 12345;
// 	printf("%s\n", ft_itoa(n));
// 	return(0);
// }