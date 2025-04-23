/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-21 09:38:10 by elenpere          #+#    #+#             */
/*   Updated: 2025-04-21 09:38:10 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/// @brief read fd + join first & just read bytes
/// @param fd - from where to read
/// @param buff - where bytes are stored
/// @return final buff
char	*ft_read_and_join(int fd, char *buff)
{
	char	*temp_buff;
	char	*temp_read;
	int		bytes_read;

	temp_buff = malloc(BUFFER_SIZE + 1);
	if (!temp_buff)
		return (free(buff), NULL);
	if (!buff)
		buff = ft_strdup("");
	bytes_read = 1;
	while (!ft_strchr(buff, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, temp_buff, BUFFER_SIZE);
		if (bytes_read == -1 || bytes_read == 0)
			return (free(temp_buff), free(buff), NULL);
		temp_buff[bytes_read] = '\0';
		temp_read = ft_strjoin(buff, temp_buff);
		free(buff);
		buff = temp_read;
	}
	return (free(temp_buff), buff);
}

/// @brief identify newline
/// @param buff from gnl ft
/// @return line if identified one
char	*ft_find_newline(char *buff)
{
	char	*line_found;
	char	*final_line;
	int		line_length;

	if (!buff || *buff == '\0')
		return (NULL);
	line_found = ft_strchr(buff, '\n');
	if (line_found)
		line_length = line_found - buff + 1;
	else
		line_length = ft_strlen(buff);
	final_line = ft_substr(buff, 0, line_length);
	return (final_line);
}

/// @brief update buffer starting point
/// @param buff from gnl ft
/// @return ptr to actual buffer starting point
char	*ft_latest_buffer(char *buff)
{
	char	*latest_buff;
	char	*new_start;
	int		line_length;
	int		newline_index;

	new_start = ft_strchr(buff, '\n');
	if (new_start)
		line_length = new_start - buff + 1;
	else
		line_length = ft_strlen(buff);
	newline_index = ft_strlen(buff) - line_length;
	latest_buff = ft_substr(buff, line_length, newline_index);
	return (free(buff), latest_buff);
}

/* /// @brief read fd line by line with a given buffer & individuals fds
/// @param fd from where to read
/// @return fd
char	*get_next_line(int fd)
{
	static char	*st_buff[4096];
	char		*line_found;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	st_buff[fd] = ft_read_and_join(fd, st_buff[fd]);
	if (!st_buff[fd])
		return (NULL);
	if (!*st_buff[fd])
		return (free(st_buff[fd]), st_buff[fd] = NULL, NULL);
	line_found = ft_find_newline(st_buff[fd]);
	st_buff[fd] = ft_latest_buffer(st_buff[fd]);
	if (!st_buff[fd] || !*st_buff[fd])
		return (free(st_buff[fd]), st_buff[fd] = NULL, line_found);
	return (line_found);
} */

/// @brief read fd line by line with a given buffer & individuals fds
/// @param fd from where to read
/// @return fd
char	*get_next_line(int fd)
{
	static char	*st_buff[4096];
	char		*line_found;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	st_buff[fd] = ft_read_and_join(fd, st_buff[fd]);
	if (!st_buff[fd])
		return (NULL);
	line_found = ft_find_newline(st_buff[fd]);
	if (!line_found)
	{
		free(st_buff[fd]);
		st_buff[fd] = NULL;
		return (NULL);
	}
	st_buff[fd] = ft_latest_buffer(st_buff[fd]);
	if (!st_buff[fd])
	{
		free(line_found);
		return (NULL);
	}
	return (line_found);
}