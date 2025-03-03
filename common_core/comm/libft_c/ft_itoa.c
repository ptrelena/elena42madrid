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

static size_t	ft_countnum(int n) // ft to count num of digits
{
	size_t count; // counter

	if (n > 0)
		count = 0; // positive num, no sign
	else
		count = 1; // negative num, (-) sign = 1 char
	while (n)      // n exists
	{
		n /= 10; // divide /10 util last digit
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

	long num; // num = n declared as long to store bigger nums
	count = ft_countnum(n);          // num of digits to convert to char
	num = n;                         // equal n to num
	str = (char *)malloc(count + 1); // final char num space
	if (!str)                        // failure check
		return (NULL);
	if (n < 0) // if num negative, change to positive
		num = -num;
	while (count > 0) // until num of digits reaches 0
	{
		// start looping from 2nd-last digit + convert to char
		// num%10 gets last digit alone + value of '0' in ascii
		str[--count] = num % 10 + '0';
		// num/10 gets left num to analyse
		num /= 10;
	}
	if (n < 0) // if num is negative, firts char = '-'
		str[0] = '-';
	str[count] = '\0'; // last char = NULL
	return (str);
}

/* int	main(void)
{
	int n = 12345;
	printf("%s\n", ft_itoa(n));
	return(0);
} */