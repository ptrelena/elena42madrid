/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:16 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:16 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

/// @brief print s + '\n' in fd
/// @param s
/// @param fd
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	int	fd = open("try.txt", O_RDWR, O_APPEND); //fd declaration
	ft_putendl_fd("Elena y Fran <3", fd);
	return (0);
} */