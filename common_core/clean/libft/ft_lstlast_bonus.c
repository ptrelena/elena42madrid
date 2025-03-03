/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:31:03 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:31:03 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief finds last node in list
/// @param lst
/// @return ptr to last node
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* int	main(void)
{
	t_list	*node1 = ft_lstnew("Elena");
	t_list	*node2 = ft_lstnew("42student");
	t_list	*node3 = ft_lstnew("Madrid");
	t_list	*last;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	last = ft_lstlast(node1);
	printf("last node: %s\n", (char *)last->content);
	return(0);
} */
