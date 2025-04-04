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

/// @brief read fd + join first & just read bytes
/// @param fd - from where to read
/// @param buff - where bytes are stored
/// @return final buff
char *ft_read_and_join(int fd, char *buff) //fd & buff from gnl
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
			return (free(buff), free(temp_buff), NULL); //free space & NULL
		temp_buff[bytes_read] = '\0'; //null-terminated
		temp_read = ft_strjoin(buff, temp_buff); //join first & just read bytes
		buff = temp_read; //assign full reading to main buffer
	}
	return(free(temp_buff), buff); //free temp_buff as not in use anymore
}

/// @brief 
/// @param buff 
/// @return 
char *ft_find_newline(char *buff) //buff from gnl
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
	return(final_line); //return final_line
}

/// @brief 
/// @param buff 
/// @return 
char *ft_latest_buffer(char *buff) //buff from gnl
{
	char	*latest_buff; //new buff start to return
	char	*new_start; //str left when '\n' found
	int		line_length; //bytes length from '\n' found
	int		newline_index; //latest buff length

	new_start = ft_strchr(buff, '\n'); //find '\n'
	if(new_start) //'\n' found => line = num bytes after '\n'
		line_length = new_start - buff + 1;
	else //'\n' not found => line = buff long
		line_length = ft_strlen(buff);
	newline_index = ft_strlen(buff) - line_length;
	//nl_i = 0 if '\n' not found / = '\n'[i] if '\n' found
	latest_buff = ft_substr(buff, line_length, newline_index);
	//define l_b in buff, from beginning (l_l), newline_index long
	free(buff); //free old buffer
	return (latest_buff); //return updated buffer
}

/// @brief 
/// @param fd 
/// @return 
char	*get_next_line(int fd)
{
	static char	*st_buff; //buff to save bytes read
	char		*line_found; //line to return

	if (fd < 0 || BUFFER_SIZE <= 0) //failure check
		return (NULL);
	st_buff = ft_read_and_join(fd, st_buff); //start reading + join read bytes
	line_found = ft_find_newline(st_buff); //look for newline
	st_buff = ft_latest_buffer(st_buff); //check buff beggining each time gnl is called
	if (!st_buff || !*st_buff) //if buff not exists or empty
		return (free(st_buff), st_buff = NULL, line_found);
		//free & clean buff if nothing found
	return (line_found);
}

int main(int argc, char **argv)
{
    int fd; //file from where to read
    char *line; //line to be returned by gnl

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
    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
	//close file
    close(fd);
    return (0);
}