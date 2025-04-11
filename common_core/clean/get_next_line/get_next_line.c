/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:31:21 by elenpere          #+#    #+#             */
/*   Updated: 2025/04/03 13:43:41 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_and_join(int fd, char *buff)
{
	char	*temp_buff;
	int		bytes_read;
	char	*temp_read;

	temp_buff = malloc(BUFFER_SIZE + 1);
	if (!temp_buff)
		return (free(buff), NULL);
	if (!buff)
		buff = ft_strdup("");
	bytes_read = 1;
	while (!ft_strchr(buff, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, temp_buff, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp_buff), free(buff), NULL);
		temp_buff[bytes_read] = '\0';
		temp_read = ft_strjoin(buff, temp_buff);
		free(buff);
		buff = temp_read;
	}
	return (free(temp_buff), buff);
}

char	*ft_newline(char *buffer)
{
	char	*newline;
	int		line_length;
	char	*extracted_line;

	if (!buffer || *buffer == '\0')
		return (NULL);
	newline = ft_strchr(buffer, '\n');
	if (newline)
		line_length = newline - buffer + 1;
	else
		line_length = ft_strlen(buffer);
	extracted_line = ft_substr(buffer, 0, line_length);
	return (extracted_line);
}

char	*ft_latest_buffer(char *buffer)
{
	char	*new_buffer;
	int		line_length;
	char	*line_position;

	line_position = ft_strchr(buffer, '\n');
	if (line_position)
		line_length = line_position - buffer + 1;
	else
		line_length = ft_strlen(buffer);
	new_buffer = ft_substr(buffer, line_length, ft_strlen(buffer)
			- line_length);
	free(buffer);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_and_join(fd, buffer);
	if (!buffer)
		return (NULL);
	if (!*buffer)
		return (free(buffer), buffer = NULL, NULL);
	line = ft_newline(buffer);
	buffer = ft_latest_buffer(buffer);
	if (!buffer || !*buffer)
		return (free(buffer), buffer = NULL, line);
	return (line);
}
