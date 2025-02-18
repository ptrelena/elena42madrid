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
	int	digit;
	char	digitc;

	digit = b % 10;
	digitc = digit + 48;
	b = b/10;
	if (b > 10)
		--- //crear ft para que se llame a sí misma hasta acabar con el num
	else
		write(1, &digitc, 1);
	return (0);
}