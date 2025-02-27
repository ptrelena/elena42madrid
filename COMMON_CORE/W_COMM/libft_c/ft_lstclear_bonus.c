/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:52 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:52 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief deletes whole list
/// @param lst - double ptr for whole list
/// @param del - del ft
/// @return void ft
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node_del; // aux ptr
	if (!lst)
		return ;
	while (*lst)
	{
		node_del = (*lst)->next; // save next node in aux ptr
		ft_lstdelone(*lst, del); // del actual node
		*lst = node_del;         // loop to following node
	}
	*lst = 0; // empty lst ptr
}

/* void del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(malloc(10));
	t_list *node2 = ft_lstnew(malloc(10));
	t_list *node3 = ft_lstnew(malloc(10));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstclear(&node1, del);
	return (0);
} */