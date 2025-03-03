/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:29:56 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:29:56 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief adds new node to end of list
/// @param content
/// @return final node w new node + NULL
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

/* int main()
{
	char *data = "error try";
	t_list *node = ft_lstnew(data);

	if (!node)
		printf("error\n");
	else
		printf("node created: %s\n", (char *)node->content);

	return (0);
} */