/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_main_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-07 15:57:33 by elenpere          #+#    #+#             */
/*   Updated: 2025-04-07 15:57:33 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

#include <fcntl.h>     // open
#include <stdio.h>     // printf, perror
#include <stdlib.h>    // free
#include <unistd.h>    // close
#include "get_next_line_bonus.h"  // tu header

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Uso: %s <archivo1> <archivo2>\n", argv[0]);
        return (1);
    }

    int fd1 = open(argv[1], O_RDONLY);
    int fd2 = open(argv[2], O_RDONLY);
	int i = 0;
	int j = 0;

    if (fd1 < 0 || fd2 < 0)
    {
        perror("Error al abrir uno de los archivos");
        return (1);
    }

    char *line1 = NULL;
    char *line2 = NULL;
    int finished1 = 0;
    int finished2 = 0;

    while (!finished1 || !finished2)
    {
        if (!finished1)
        {
            line1 = get_next_line(fd1);
            if (line1)
            {
                printf("FD1: %s", line1);
				i++;
				printf("arg1 %d\n", i);
                free(line1);
            }
            else
                finished1 = 1;
        }

        if (!finished2)
        {
            line2 = get_next_line(fd2);
            if (line2)
            {
                printf("FD2: %s", line2);
				j++;
				printf("arg2: %d\n", j);
                free(line2);
            }
            else
                finished2 = 1;
        }
    }

    close(fd1);
    close(fd2);
    return (0);
}
