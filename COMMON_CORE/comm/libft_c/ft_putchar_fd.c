/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:01 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:01 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

/// @brief print c in fd
/// @param c
/// @param fd
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putchar_fd('E', 1);
	int fd = open("try.txt", O_RDWR, O_APPEND); //fd declaration
	ft_putchar_fd('E', fd);
	return (0);
} */