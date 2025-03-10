/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-05 14:18:17 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-05 14:18:17 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* //char
int	main(void)
{
	char	c1 = 'c';
	
	ft_printf("e: printing char %c\n", c1);
	printf("p: printing char %c\n", c1);
	
	return(0);
} */

/* //str
int	main(void)
{
	char	*s1 = "Elena";
	
	ft_printf("e: printing str %s\n", s1);
	printf("p: printing str %s\n", s1);

	return(0);
} */

/* //empty str
int	main(void)
{
	char	*s2 = NULL;
	
	ft_printf("e: printing empty str %s\n", s2);
	printf("p: printing empty str %s\n", s2);

	return(0);
} */

//ptr
int	main(void)
{
	char	*ptr = "my name is Elena";
	unsigned int	x = 267;

	ft_printf("e: printing ptr %p\n", ptr);
	printf("p: printing ptr %p\n", ptr);
	
	ft_printf("e: printing hexadecimal lowecase %x\n", x);
	printf("p: printing hexadecimal lowecase %x\n", x);
	
	return(0);
}

/* //digit
int	main(void)
{
	int	d1 = 1;
	
	ft_printf("e: printing digit %d\n", d1);
	printf("p: printing digit %d\n", d1);
	
	return(0);
} */

/* //integer
int	main(void)
{
	int	i1 = -2147483648;

	ft_printf("e: printing integer %i\n", i1);
	printf("p: printing integer %i\n", i1);
	
	return(0);
} */

/* //unsigned int - positive
int	main(void)
{
	unsigned int	u1 = 12;
	unsigned int	xlower = 267;
	
	ft_printf("e: printing unsigned int %u\n", u1);
	printf("p: printing unsigned int %u\n", u1);
	
	return(0);
} */

/* //unsigned int - negative
int	main(void)
{
	unsigned int	u2 = -854;

	ft_printf("e: printing unsigned int %u\n", u2);
	printf("p: printing unsigned int %u\n", u2);

	return(0);
} */

/* //hexadecimal lowecase
int	main(void)
{
	unsigned int	x = 267;
	
	ft_printf("e: printing hexadecimal lowecase %x\n", x);
	printf("p: printing hexadecimal lowecase %x\n", x);
	
	return(0);
} */

/* //hexadecimal uppercase
int	main(void)
{
	unsigned int	x = 267;

	ft_printf("e: printing hexadecimal uppercase %X\n", x);
	printf("p: printing hexadecimal uppercase %X\n", x);
	
	return(0);
} */

/* //percentage
int	main(void)
{
	ft_printf("e: printing percentage %%%%\n");
	printf("p: printing percentage %%%%\n");
	
	return(0);
} */

//cambios ok