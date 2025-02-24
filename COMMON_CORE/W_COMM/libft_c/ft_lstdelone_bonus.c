/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-24 09:30:55 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-24 09:30:55 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst) //nothing to return if empty list
		return ;
	del(lst->content); //del content inside lst node
	free(lst); //free emptied node
}

/* int main()
{
    char *content = malloc(15);
    if (!content)
        return (1);
    
    t_list *node = ft_lstnew(content);
    if (!node)
    {
        free(content);
        return (1);
    }

    ft_lstdelone(node, free);

    return 0;
} */
