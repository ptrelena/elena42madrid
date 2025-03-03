/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:34:45 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/19 11:43:06 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	x;
	int	y;
	int	*div;
	int	*mod;

	div = &x;
	mod = &y;	
	ft_div_mod(20, 3, div, mod);
	printf("Div = %d. Mod = %d", x, y);
	return 0;
}*/
