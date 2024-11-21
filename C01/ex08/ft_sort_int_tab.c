/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:29:08 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:49:53 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab [i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
int	main()
{
	int	array [] = {-14,1,32,16,-2,5,43,6,9,2,-11,4,-5};
	int	size = 13;
	int	i;
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	printf("\n");

	ft_sort_int_tab(array, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return 0;
}*/
