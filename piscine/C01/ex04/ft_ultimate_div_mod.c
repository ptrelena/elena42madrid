/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:25:41 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:43:17 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int a;
	int b;

	a = 7;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("Div: %d. Mod: %d", a, b);
	return 0;
}*/
