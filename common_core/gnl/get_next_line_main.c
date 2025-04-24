/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:36:38 by elenpere          #+#    #+#             */
/*   Updated: 2025/04/03 13:37:47 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd; //file from where to read
	char	*line; //line to be returned by gnl

	if (argc != 2) //args must be 2 => ./a.our + file name
	{
		//error if file name is not defined
		printf("ft use: %s <file>\n", argv[0]);
		return (1);
	}

	//open arg1 = file name
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) //failure check
	{
		perror("could not open file");
		return (1);
	}
	//gnl printing lines while '\0' is not found
	printf("Buffer %d \n", BUFFER_SIZE);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	printf("\n");
	free(line);
	//close file
	close(fd);
	return (0);
}
