/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:43 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:43 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief adds new node to lst end
/// @param lst - double ptr to nodes
/// @param  new - new ptr node to be added
/// @return void ft
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_last;

	if(!new)
		return ; //if new is empty, exit ft
	if (!lst || !(*lst)) //if lst not exist or is empty
	{
		*lst = new; //first node = new node
		return ; //exit ft
	}
	temp_last = ft_lstlast(*lst); //temporary last = last node
	temp_last->next = new; //last node ptr now pointing to new
}

/* int main()
{
    t_list *node1 = ft_lstnew("new node1");
	t_list *node2 = ft_lstnew("new node2");
	t_list *node3 = ft_lstnew("new node3");
	t_list	*final_list;

	ft_lstadd_back(&node1, node3);
    ft_lstadd_back(&node1, node2);
    
	final_list = node1;
	while(final_list)
	{
		printf("final list: %s\n", (char *)final_list->content);
		final_list = final_list->next;
	}
    return (0);
} */