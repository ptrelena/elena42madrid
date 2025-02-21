/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:25 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:25 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char	*s, int	fd)
{
	size_t	strlen;

	strlen = ft_strlen(s);
	write(fd, s, strlen);
}

// int	main(void)
// {
// 	int fd = open("prueba.txt", O_RDWR, O_APPEND); //fd declaration
// 	ft_putstr_fd("Elena", fd);
// 	return(0);
// }