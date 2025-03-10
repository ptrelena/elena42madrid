/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-10 16:57:15 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-10 16:57:15 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//char & percentage printing
void	ft_putchar(int c)
{
	write(1, &c, 1);
}

//str printing
int	ft_putstr(const char *c)
{
	int	i;

	i = 0;
	if(c == NULL)
		return (write(1, "(null)", 6));
	while(c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	return(0);
}

//digit & int printing
void	ft_putnbr(int c)
{
	char	digit;

	if (c == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (c < 0)
		{
			write(1, "-", 1);
			c = -c;
		}
		if (c >= 10)
			ft_putnbr(c / 10);
		digit = c % 10 + '0';
		write(1, &digit, 1);
	}
}

//unsigned printing
void	ft_putunsigned(int c)
{
	unsigned int num;

	if (c < 0)
		num = (unsigned int)c; //convert n to 32bits archictecture
	else
		num = c;
	if (num >= 10)
		ft_putunsigned(num / 10);
	ft_putchar((num % 10) + '0');
}

//hex lower & upper printing
void	ft_puthexlower(int c)
{
	unsigned int num;
	char	*hex;

	num = (unsigned int)c;
	hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthexlower(num / 16);
    ft_putchar(hex[num % 16]); // (num % 16) = [i] for 'hex' char position
}

void	ft_puthexupper(int c)
{
	unsigned int num;
	char	*hex;

	num = (unsigned int)c;
	hex = "0123456789ABCDEF";
	if (num >= 16)
        ft_puthexupper(num / 16);
    ft_putchar(hex[num % 16]); // (num % 16) = [i] for 'hex' char position
}

size_t	ft_strlen(const char *c)
{
	int	lenght;
	
	lenght = 0;
	while (c[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

void ft_putnbrbase(unsigned int c, char *base)
{
	char	digit;
	
	if(c >= (ft_strlen(base)))
	ft_putnbrbase(c / ft_strlen(base), base);
	digit = c % (ft_strlen(base)) + '0';
	write(1, &digit, 1);
}

//ptr printing
void	*ft_putptr(void *ptr)
{
	write(1, "0x", 2);
	ft_putnbrbase((unsigned long)ptr, HEXLOWER);
}

/* void	*ft_putptr(void *ptr)
{
	char	digit;

	if (ptr == NULL)
		return(ft_putstr("(nil)")); //nil = null linux para Moulinette
	ft_putstr("0x");
	write(1,ft_putnbrbase((unsigned long)ptr, HEXLOWER));//+2 - 0x positions
} */

/* void	*ft_putptr(void *ptr)
{
	unsigned long mem = (unsigned long)ptr; //enough space to save ptr location

	write(1, "0x", 2); //indicates an hexdecimal num follows
	if (mem == 0)
		ft_putchar('0');
	else
		ft_puthexlower(mem); //print hexadecimal mem location
	return (ptr);
} */