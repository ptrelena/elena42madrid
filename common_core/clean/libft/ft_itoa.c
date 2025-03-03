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

static size_t	ft_countnum(int n)
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

/// @brief converts int to char
/// @param n - int num
/// @return ptr to num in char
char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	long	num;

	count = ft_countnum(n);
	num = n;
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n < 0)
		num = -num;
	while (count > 0)
	{
		str[--count] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* int	main(void)
{
	int n = 12345;
	printf("%s\n", ft_itoa(n));
	return(0);
} */