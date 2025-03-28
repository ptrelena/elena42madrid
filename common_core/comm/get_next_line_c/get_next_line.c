/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-13 10:31:21 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-13 10:31:21 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char *ft_get_next_line(int fd)
{
	int		fd; //file from where to read
	int		chars_read; //num of chars read
	char	buf[256]; //buffer where num of chars is stored

	fd = open("try.txt", O_RDWR | O_APPEND);

	while((chars_read = read(fd, buf, BUFFER_SIZE)))
	{
		if (chars_read < 0)
			return (NULL);
		
		//funcion que me encuentre el \n
		buf[chars_read] = '\0';
		printf("buf -> %s\n", buf);
	}
}
