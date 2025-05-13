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

int	main(int argc, char **argv, char **envp)
{
	//envp is defined as main arg as it's a predefined variable, when
	//declaring this variable, OS access the predefined env variables
	if (argc == 5)
	{
		//program starts as argc is valid
		int		file1;
		int 	file2;
		int		pipefd[2];
		pid_t	pid; //fork() pid_t = process id type
		char	**cmd;

		file1 = open(argv[1], O_RDONLY);
		file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
		//O_TRUNC = erase previous content if exists
		//0777 = full read, write, execute permissions

		pipe(pipefd); //pipefd[0], pipefd[1]
		pid = fork();
		
		if (pid == 0) //son
		{
			cmd = ft_split(argv[2], ' ');
			dup2(file1, 0); //stdin(0) = opened & read file1
			dup2(pipefd[1], 1); //stdout(1) = pipe's stdin
			close(file1);
			close(file2);
			close(pipefd[0]);
			close(pipefd[1]);
			
			//printf("I'm the son");
		}
		else //father
		{
			cmd = ft_split(argv[3], ' ');
			dup2(pipefd[0], 0); //stdin(0) = pipe's stdout
			dup2(file2, 1); //stdout(1) = opned & written file2
			close(file1);
			close(file2);
			close(pipefd[0]);
			close(pipefd[1]);
			//printf("I'm the father");
		}
	}	
	else
	{
		printf("error");
	}
}
/* 
argv[0] = ./a.out (./pipex)
argv[1] = file1
argv[2] = command1
argv[3] = command2
argv[4] = file2
*/