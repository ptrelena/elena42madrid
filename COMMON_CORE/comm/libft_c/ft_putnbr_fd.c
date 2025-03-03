/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:22 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:22 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

/// @brief prints num in fd
/// @param n
/// @param fd
void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		digit = n % 10 + '0';
		write(fd, &digit, 1);
	}
}

/* int	main(void)
{
	int	fd = open("try.txt", O_RDWR, O_APPEND); //fd declaration
	ft_putnbr_fd(42, fd);
	return (0);
} */