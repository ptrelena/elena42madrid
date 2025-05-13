/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-09 11:36:52 by elenpere          #+#    #+#             */
/*   Updated: 2025-05-09 11:36:52 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/// @brief find command path
/// @param envp 
/// @return ptr to PATH absolute rutes (def only)
char	*cmd_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i])
	{
		if(ft_strncmp(envp[i], "PATH=", 5))
			return(envp[i] + 5);
		i++;
	}
	return (NULL);
}
