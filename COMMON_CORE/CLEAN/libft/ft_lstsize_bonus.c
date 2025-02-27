/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:31:13 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:31:13 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief calculates list size (num of nodes)
/// @param lst ptr to first node
/// @return int of nodes
int	ft_lstsize(t_list *lst)
{
	int	nodes;

	nodes = 0;
	while (lst)
	{
		lst = lst->next;
		nodes++;
	}
	return (nodes);
}

/* int main()
{
	t_list *node1 = ft_lstnew("first node");
	t_list *node2 = ft_lstnew("second node");
	t_list *node3 = ft_lstnew("third node");
	int	total_nodes;

	//link nodes
	node1->next = node2;
	node2->next = node3;

	//call ft
	total_nodes = ft_lstsize(node1);
	printf("lst has %d nodes\n", total_nodes);

	//free node space
	free(node1);
	free(node2);
	free(node3);
	return (0);
} */