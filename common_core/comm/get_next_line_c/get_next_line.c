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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*get_next_line(int fd)
{
	char	*buff; //buff where read bytes will be stored
	int bytes_read; //num of bytes read

	buff = malloc(BUFFER_SIZE + 1); //initial mem for buff
	if(!buff || fd < 0) //buff failure
		return NULL;
	while(!ft_strchr(buff, '\n') || bytes_read > 0) //read until '\n' found
		bytes_read = read(fd, buff, BUFFER_SIZE);
	buff[bytes_read] = '\0'; //final NULL
	return(buff); //return buff
}

int main()
{
	int fd = open("try.txt", O_RDWR | O_CREAT, 0644);

	printf("gnl -> %s", get_next_line(fd));
	return(0);
}


/* char *ft_get_next_line(int fd)
{
	static int		fd; //file from where to read
	int				chars_read; //num of chars read
	char			buf[256]; //buffer where num of chars is stored

	//'static' variable are defined to NULL just by being declared
	chars_read = read_fd(fd, buf); //start reading
	while((chars_read = read(fd, buf, BUFFER_SIZE)))
	{
		if (chars_read < 0)
			return (NULL);
		
		//funcion que me encuentre el \n
		buf[chars_read] = '\0';
		printf("buf -> %s\n", buf);
	}
} */
