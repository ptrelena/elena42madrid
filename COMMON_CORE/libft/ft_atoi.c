/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:03:56 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:03:56 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converts the initial portion of the string pointed to by str
to int representation. Transforma str a int */


// Incluímos nuestra librería
#include "libft.h"

int ft_atoi(const char *nptr)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;
   
       while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32)) //no espacios
        i++;

    if (nptr[i] == '-' || nptr[i] == '+') //comprobar signo
    {
        if (nptr[i] == '-')
            sign = -1; //cambiamos de (1) a (-1) porque el número es negativo
        i++;
    }

    //convertir caracteres numéricos en entero
    while (nptr[i] >= '0' && nptr[i] <= '9') //número es digito
    {
        result = result * 10 + (nptr[i] - '0'); 
		// (result + 10) mueve el digito analizado a la izq
		// (nptr[i] - '0') => ascii dígito - ascii '0' = valor numérico dígito
        i++;
    }

    return (result * sign);
}
/*
int main(void)
{
    int a;
	int	b;

    a = ft_atoi("-15");
    printf("%d\n", a);
    b = atoi("15");  //atoi normal para comparar
    printf("%d\n", b);
    return 0;
}*/