/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:55 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:55 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief deletes one node
/// @param lst - specific node to delete
/// @param del - del ft
/// @return void ft
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* int main()
{
	char *content = malloc(15);
	if (!content)
		return (1);

	t_list *node = ft_lstnew(content);
	if (!node)
	{
		free(content);
		return (1);
	}
	ft_lstdelone(node, free);
	return (0);
} */
