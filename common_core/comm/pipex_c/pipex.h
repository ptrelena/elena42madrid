/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-09 11:35:50 by elenpere          #+#    #+#             */
/*   Updated: 2025-05-09 11:35:50 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//declaración de funciones/structs/globals

#ifndef PIPEX_H
# define PIPEX_H

//needed libraries
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//used ft
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_extract_path(char **envp);
size_t	ft_strlen(const char *s);
char	*ft_slashjoin(char const *s1, char const *s2);
void	ft_free_array(char **array);
char	*ft_cmd_path(char **cmd, char **envp);
void	ft_pipex_son(char **argv, char **envp,
		int file1, int file2, int *pipefd);
void	ft_pipex_father(char **argv, char **envp,
		int file1, int file2, int *pipefd);
void	ft_pipex_error(void);
void	ft_pipex(char **argv, char **envp);

#endif