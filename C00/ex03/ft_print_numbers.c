/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:07:05 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/11 11:07:08 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = '0';
	while (numero <= '9')
	{
		write (1, &numero, 1);
		numero++;
	}
}

/*
int main()
{
	ft_print_numbers();
	return 0;
}
*/
