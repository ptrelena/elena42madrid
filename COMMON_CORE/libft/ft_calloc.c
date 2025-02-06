/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:05:17 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:05:17 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Contiguously allocates enough space for count objects that are size bytes of
memory each and returns a pointer to the allocated memory. The allocated memory
is filled with bytes of value zero. */

// Incluímos nuestra librería
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
/*
int	main(void)
{
	printf("%p\n", ft_calloc(2, 2));
	printf("%s\n", (char *)ft_calloc( 2, 2));
	printf("%p\n", calloc( 2, 2));
	return(0);
	//i = malloc(5 * sizeof(int));
}*/

/*
Función calloc(num, size)
    tamaño_total ← num * size
    
    Si tamaño_total es 0:
        Retornar NULL
    
    puntero ← asignar_memoria(tamaño_total) // Similar a malloc()
    
    Si puntero es NULL:
        Retornar NULL
    
    Para i desde 0 hasta tamaño_total - 1 hacer:
        puntero[i] ← 0  // Inicializar en 0 cada byte
    
    Retornar puntero
*/