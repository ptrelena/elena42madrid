/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:58:37 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/12 11:32:11 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n >= 0)
	{
		write (1, &positivo, 1);
	}
	else
	{
		write (1, &negativo, 1);
	}
}
/*
int main()
{
	ft_is_negative(9);
    ft_is_negative(0);
    ft_is_negative(-3);
	return 0;
}*/
