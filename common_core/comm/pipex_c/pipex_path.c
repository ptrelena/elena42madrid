/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-14 08:10:25 by elenpere          #+#    #+#             */
/*   Updated: 2025-05-14 08:10:25 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/// @brief s1 & s2 cmp in 'n' first bytes
/// @param s1
/// @param s2
/// @param n
/// @return 0 if equal / s1-s2 if different
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/// @brief find command path
/// @param envp 
/// @return ptr to PATH absolute rutes (def only)
char	*ft_extract_path(char **envp)
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

char	*ft_cmd_path(char **cmd, char **envp)
{
	char	*extract_path;
	char	**all_paths;
	char	*final_path;
	int		i;

	extract_path = ft_extract_path(envp);
	all_paths = ft_split(extract_path, ':');
	i = 0;
	while (all_paths[i])
	{
		final_path = ft_slashjoin(all_paths[i], cmd[0]);
		if (access(final_path, X_OK) == 0) //X_OK->execution access ok
			ft_free_array(all_paths); //avoid mem leaks
			return(final_path);
		free(final_path);
		i++;
	}
	return(NULL);//return NULL if no path found
}