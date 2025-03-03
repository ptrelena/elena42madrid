/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:48 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:48 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief add new node to list beginning
/// @param lst - double ptr to nodes
/// @param  new - new ptr node to be added
/// @return void ft
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;          // if new is empty, exit ft
	if (!lst || !(*lst)) // if lst not exist or is empty
	{
		*lst = new; // first node = new node
		return ;     // exit ft
	}
	new->next = *lst; // new node is now first node
	*lst = new;       // 1st node ptr now pointing to new
}

/* int main()
{
	t_list *lst_x = NULL;
	t_list *node1 = ft_lstnew("new node1");
	t_list *node2 = ft_lstnew("new node2");

	ft_lstadd_front(&lst_x, node1);
	printf("node: %s\n", (char *)lst_x->content);
	ft_lstadd_front(&lst_x, node2);
	printf("node: %s\n", (char *)lst_x->content);
	return (0);
} */