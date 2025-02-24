/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:31:05 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:31:05 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* /// @brief iterates list applying f ft
/// @param lst - ptr to first node
/// @param f - ft to apply
/// @param del - del ft
/// @return new list after f ft applied
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del) //if any parameter empty -> NULL
		return (NULL);
	new_list = NULL; //start empty list from first node
	while (lst)
	{
		content = f(lst->content); //apply f to node, save in content variable
		new_node = ft_lstnew(content); //new node after f applied
		if (!new_node) //node failure check
		{
			del(content); //if NULL -> free space
			ft_lstclear(&new_list, del); //if NULL -> del lst nodes
			return (NULL); //failure = NULL
		}
		ft_lstadd_back(&new_list, new_node); //add node to new list
		lst = lst->next; //loop to following node
	}
	return (new_list); //return final list
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del) //if any parameter empty -> NULL
		return (NULL);
	new_list = NULL; //start empty list from first node
	while (lst)
	{
		//create node with f applied storing it in new_node variable
		new_node = ft_lstnew(f(lst->content));
		if (!new_node) //node failure check
		{
			ft_lstclear(&new_list, del); //if NULL -> del lst nodes
			return (NULL); //failure = NULL
		}
		ft_lstadd_back(&new_list, new_node); //add node to new list
		lst = lst->next; //loop to following node
	}
	return (new_list); //return final list
}

int main(void)
{
	
}
