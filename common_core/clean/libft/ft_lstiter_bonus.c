/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:59 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:59 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief iterates node by node applying f ft
/// @param lst first node
/// @param f ft to apply
/// @return void
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void print_content(void *content)
{
	printf("node content: %s\n", (char *)content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew("first node");
	t_list *node2 = ft_lstnew("second node");
	t_list *node3 = ft_lstnew("third node");

	//link nodes + add NULL
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstiter(node1, print_content);
	return (0);
} */