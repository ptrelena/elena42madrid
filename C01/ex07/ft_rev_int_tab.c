/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:44:53 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:49:04 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}


int	main(void)
{
	int	array[] = {1,2,3,4,5,6};
	int	size = 6;

	ft_rev_int_tab(array, size);
	size = 0;
	while (size < 6)
	{
		printf("%d", array[size]);
		size ++;
	}
	return (0);
}
