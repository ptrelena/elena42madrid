/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:31:21 by elenpere          #+#    #+#             */
/*   Updated: 2025/04/03 13:44:22 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/// @brief read fd + join first & just read bytes
/// @param fd - from where to read
/// @param buff - where bytes are stored
/// @return final buff
char	*ft_read_and_join(int fd, char *buff)//fd & buff from gnl
{
	char		*temp_buff; //temporary buffer
	char		*temp_read; //join initial and just read bytes
	int			bytes_read; //bytes read by read()

	temp_buff = malloc(BUFFER_SIZE + 1); //spaces for temp_buff + NULL
	if (!temp_buff)
		return (NULL);
	if (!buff) //create empty buff if not initialized
		buff = ft_strdup("");
	bytes_read = 1; //b_r = 1 so following while can start
	while (!ft_strchr(buff, '\n') && bytes_read > 0) //no '\n' & nthn to read
	{
		bytes_read = read(fd, temp_buff, BUFFER_SIZE); //start reading
		if (bytes_read == -1) //if reading errors
			return (free(temp_buff), free(buff), NULL); //free space & NULL
		temp_buff[bytes_read] = '\0'; //null-terminated
		temp_read = ft_strjoin(buff, temp_buff); //join first & just read bytes
		free(buff);
		buff = temp_read; //assign full reading to main buffer
	}
	return (free(temp_buff), buff); //free temp_buff as not in use anymore
}

/// @brief identify newline
/// @param buff from gnl ft
/// @return line if identified one
char	*ft_find_newline(char *buff) //buff from gnl
{
	char	*line_found; //store content following '\n'
	char	*final_line; //store line to return
	int		line_length; //calculate resulting line length

	if (!buff || *buff == '\0') //failure check
		return (NULL);
	line_found = ft_strchr(buff, '\n'); //search '\n'
	if (line_found) //calculate full line length if '\n' found
		line_length = line_found - buff + 1;
	else //no '\n' found => no newline => length stays the same
		line_length = ft_strlen(buff);
	final_line = ft_substr(buff, 0, line_length);
	//define f_l in buff, from beggining, line_length before calculated
	return (final_line); //return final_line
}

/// @brief update buffer starting point
/// @param buff from gnl ft
/// @return ptr to actual buffer starting point
char	*ft_latest_buffer(char *buff) //buff from gnl
{
	char	*latest_buff; //new buff start to return
	char	*new_start; //str left when '\n' found
	int		line_length; //bytes length from '\n' found
	int		newline_index; //latest buff length

	new_start = ft_strchr(buff, '\n'); //find '\n'
	if (new_start) //'\n' found => line = num bytes after '\n'
		line_length = new_start - buff + 1;
	else //'\n' not found => line = buff long
		line_length = ft_strlen(buff);
	newline_index = ft_strlen(buff) - line_length;
	//nl_i = 0 if '\n' not found / = '\n'[i] if '\n' found
	latest_buff = ft_substr(buff, line_length, newline_index);
	//define l_b in buff, from beginning (l_l), newline_index long
	return (free(buff), latest_buff); //return updated buffer
}

/// @brief read fd line by line with a given buffer
/// @param fd from where to read
/// @return fd
char	*get_next_line(int fd)
{
	static char	*st_buff;
	char		*line_found;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	st_buff = ft_read_and_join(fd, st_buff);
	line_found = ft_find_newline(st_buff);
	st_buff = ft_latest_buffer(st_buff);
	if (!st_buff || !*st_buff)
		return (free(st_buff), st_buff = NULL, line_found);
	return (line_found);
}
