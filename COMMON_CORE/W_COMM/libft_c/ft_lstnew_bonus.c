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
	t_list	*new; //ptr for new node
	
	new = (t_list *)malloc(sizeof(t_list)); //calculate node size
	if (!new) //NULL if new fails
		return(NULL);
	new->content = (void *)content; //add new node ptr end, content = void *
	new->next = NULL; //last node as NULL
	return(new); //return new ptr
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