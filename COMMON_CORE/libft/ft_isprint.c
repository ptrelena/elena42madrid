/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 17:53:52 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 17:53:52 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Incluímos nuestra librería
#include "libft.h"

int ft_isprint(int c)
{
    if (c >= ' ' && c <= '~')
        return (1);
    return (0);
}

/*
int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;

    a = 'a';
    b = 'A';
    c = '1';
    d = '=';
    e = 128;
    printf("%d", ft_isprint(a));
    printf("%d", ft_isprint(b));
    printf("%d", ft_isprint(c));
    printf("%d", ft_isprint(d));
    printf("%d", ft_isprint(e));
	return (0);
}*/