/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:57:02 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:41:13 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	valuea;

	valuea = *a;
	*a = *b;
	*b = valuea;
}

/*
int	main()
{
	int	valuea;
	int a;
	int b;

	valuea = 0;
	a = 2;
	b = 3;

	ft_swap(&a, &b);
	printf("Final values: a = %d y b = %d", a, b);
	return 0;
} */
