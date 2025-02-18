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

void	ft_putnbr_fd(int	n, int	fd)
{
	int	b; //int to save 'n' value
	int	digit; //individual digit
	char	digit_ascii;

	b = n; //save n in b
	digit = b % 10; //b remainder(resto) is individual digit
	digit_ascii = digit + '0'; //digit in ASCII
	if (b < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (b >= 10)
		ft_putnbr_fd(n/10, fd);
	write(fd, &digit_ascii, 1);
}

// int	main(void)
// {
// 	int	fd = open("prueba.txt", O_RDWR, O_APPEND); //fd declaration
// 	ft_putnbr_fd(42, fd);
// 	return (0);
// }