/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-10 19:52:05 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-10 19:52:05 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int				d1 = 1;
	int				i1 = -2147483648;
	char			c1 = 'c';
	char			*s1 = "Elena";
	char			*s2 = NULL;
	char			*ptr = "hello, how are you? my name is Elena";
	char			*null = NULL;
	unsigned int	u1 = 12;
	unsigned int	u2 = -854;
	unsigned int	x = 267;
	
	ft_printf("e: printing char %c\n", c1);
	printf("p: printing char %c\n", c1);

	ft_printf("e: printing str %s\n", s1);
	printf("p: printing str %s\n", s1);

	ft_printf("e: printing empty str %s\n", s2);
	printf("p: printing empty str %s\n", s2);

	ft_printf("e: printing ptr %p\n", ptr);
	printf("p: printing ptr %p\n", ptr);

	ft_printf("e: printing ptr %p\n", null);
	printf("p: printing ptr %p\n", null);

	ft_printf("e: printing digit %d\n", d1);
	printf("p: printing digit %d\n", d1);
	
	ft_printf("e: printing integer %i\n", i1);
	printf("p: printing integer %i\n", i1);
	
	ft_printf("e: printing unsigned int %u\n", u1);
	printf("p: printing unsigned int %u\n", u1);
	
	ft_printf("e: printing unsigned int %u\n", u2);
	printf("p: printing unsigned int %u\n", u2);

	ft_printf("e: printing hexadecimal lowercase %x\n", x);
	printf("p: printing hexadecimal lowercase %x\n", x);

	ft_printf("e: printing hexadecimal uppercase %X\n", x);
	printf("p: printing hexadecimal uppercase %X\n", x);
	
	ft_printf("e: printing percentage %%%%\n");
	printf("p: printing percentage %%%%\n");

	return(0);
}

/* 
<PREGUNTAS> 
_ int	ft_printf(char const *c, ...) -> por qué se usa char const * como variable?
_ por qué se usan las listas variádicas para el printf?
_ qué almacena exactamente la variable va_list	args?
_ por qué ft_convert(va_list args, char n) recibe como primer arg un va_list args?
_ por qué putchar recibe un int como parámetro?
*/