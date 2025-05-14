/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-09 11:35:55 by elenpere          #+#    #+#             */
/*   Updated: 2025-05-09 11:35:55 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_pipex_son(char **argv, char **envp,
				int file1, int file2, int *pipefd)
{
	char	**cmd;
	char	*final_path;
	
	cmd = ft_split(argv[2], ' ');
	dup2(file1, 0); //stdin(0) = opened & read file1
	dup2(pipefd[1], 1); //stdout(1) = pipe's stdin
	close(file1);
	close(file2);
	close(pipefd[0]);
	close(pipefd[1]);
	final_path = ft_cmd_path(cmd, envp);
	if (execve(final_path, cmd, envp) == -1)
	{
		perror("Error: execve failure (son)");
		ft_free_array(cmd);
		exit(EXIT_FAILURE); //dead end
	}
}

void	ft_pipex_father(char **argv, char **envp,
				int file1, int file2, int *pipefd)
{
	char	**cmd;
	char	*final_path;
	
	cmd = ft_split(argv[3], ' ');
	dup2(pipefd[0], 0); //stdin(0) = pipe's stdout
	dup2(file2, 1); //stdout(1) = opned & written file2
	close(file1);
	close(file2);
	close(pipefd[0]);
	close(pipefd[1]);
	final_path = ft_cmd_path(cmd, envp);
	if (execve(final_path, cmd, envp) == -1)
	{
		perror("Error: execve failure (father)");
		ft_free_array(cmd);
		exit(EXIT_FAILURE); //dead end
	}
}

void	ft_pipex_error(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

void	ft_pipex(char **argv, char **envp)
{
	//program starts as argc is valid
	int		file1;
	int 	file2;
	int		pipefd[2];
	pid_t	pid; //fork() pid_t = process id type
	
	file1 = open(argv[1], O_RDONLY);
	if (file1 < 0)
	ft_pipex_error();
	file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777); //O_TRUNC = erase previous content if exists
	if (file2 < 0)
	ft_pipex_error();
	if(pipe(pipefd) == -1)
	ft_pipex_error();
	pid = fork();
	if (pid == -1)
	ft_pipex_error();
	if (pid == 0) //son
	ft_pipex_son(argv, envp, file1, file2, pipefd);
	else //father
	{
		ft_pipex_father(argv, envp, file1, file2, pipefd);
		waitpid(pid, NULL, 0);//0=waits for son
	}
}

int	main(int argc, char **argv, char **envp)
{
	//envp is defined as main arg as it's a predefined variable, when
	//declaring this variable, OS access the predefined env variables
	if (argc == 5)
		ft_pipex(argv, envp);
	else
	{
		perror("Error: invalid number of arguments");
		exit(EXIT_FAILURE); //dead end
	}
	return (0);
}
