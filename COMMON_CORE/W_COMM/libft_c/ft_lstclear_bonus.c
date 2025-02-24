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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_del; //aux ptr

	if(!lst)
		return ;
	while(lst)
	{
		node_del = (*lst)->next; //save next node in aux ptr
		ft_lstdelone(*lst, del); //del actual node
		*lst = node_del; //loop to following node
	}
	*lst = 0; //empty lst ptr
}

/* void del(void *content)
{
    free(content); // Liberamos la memoria del contenido
}

int main()
{
    // Crear nodos
    t_list *node1 = ft_lstnew(malloc(10)); // Nodo 1
    t_list *node2 = ft_lstnew(malloc(10)); // Nodo 2
    t_list *node3 = ft_lstnew(malloc(10)); // Nodo 3
    
    // Conectar nodos
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Lista original: node1 -> node2 -> node3 -> NULL

    // Llamar a ft_lstclear para limpiar toda la lista
    ft_lstclear(&node1, del);

    // Al final, node1 será NULL

    return 0;
} */