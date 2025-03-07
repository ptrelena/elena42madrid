/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_extra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-03-05 12:18:37 by elenpere          #+#    #+#             */
/*   Updated: 2025-03-05 12:18:37 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}


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


void	ft_putunsigned(int n)
{
	unsigned int num;

	if (n < 0)
		num = (unsigned int)n; //convert n to 32bits archictecture
	else
		num = n;
	if (num >= 10)
		ft_putunsigned(num / 10);
	ft_putchar((num % 10) + '0');
}

void	ft_puthex(int n, char *base) //TO DO:change int to unsigned longlong for enough space
{
	unsigned int num;

	num = (unsigned int)n;
	if (num > 15)
		ft_puthexlower(num / 16);
    ft_putchar(base[num % 16]); // (num % 16) = [i] for 'hex' char position
}

size_t	ft_strlen(const char *s)
{
	int	lenght;
	
	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

void ft_putnbrbase(unsigned int n, char *base)
{
	char	digit;
	
	if(n >= (ft_strlen(base)))
	ft_putnbrbase(n / ft_strlen(base), base);
	digit = n % (ft_strlen(base)) + '0';
	write(1, &digit, 1);
}

void	*ft_putptr(void *ptr)
{
	write(1, "0x", 2);
	ft_puthex((int)ptr, HEXLOWER);
}

/* void	*ft_putptr(void *ptr)
{
	char	digit;

	if (ptr == NULL)
		return(ft_putstr("(nil)")); //nil = null linux para Moulinette
	ft_putstr("0x");
	digit = 
	return(ft_putnbrbase((unsigned int)ptr, HEXUPPER));
} */
