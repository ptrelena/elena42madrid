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

//crear pipe + gestionar procesos - buscar envp

//child process one ft

//child process two ft

//close & wait ft

//main (args)

int	main(int argc, char **argv)
{
	int		file1;
	int 	file2;
	int		pipefd[2];
	pid_t	pid; //fork()
	
	/* 
	argv[0] = ./a.out (./pipex)
	argv[1] = file1
	argv[2] = command1
	argv[3] = command2
	argv[4] = file2
	*/

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	//O_TRUNC = erase previous content if exists
	//0777 = full read, write, execute permissions

	if (argc == 5)
	{
		//program starts as argc is valid
		pipe(pipefd); //pipefd[0], pipefd[1]
		pid = fork();
		if (pid == 0) //working with son
			printf("I'm the son");
		else
		printf("I'm the father");
	}	
	else
	{
		printf("error");
	}
}