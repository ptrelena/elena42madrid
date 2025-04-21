/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-21 09:38:35 by elenpere          #+#    #+#             */
/*   Updated: 2025-04-21 09:38:35 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//define library name
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

//define default buffer
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//include necessary libraries
# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

//mention used ft
char	*get_next_line(int fd);
char	*ft_read_and_join(int fd, char *buff);
char	*ft_find_newline(char *buff);
char	*ft_latest_buffer(char *buff);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif