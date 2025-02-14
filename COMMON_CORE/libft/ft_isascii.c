/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 17:06:15 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-15 17:06:15 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127) //ascii chars
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
    unsigned char   e;

    a = 'a';
    b = 'A';
    c = '1';
    d = '@';
    e = 164; // Número ASCII de la letra 'ñ'
    printf("%d", ft_isascii(a));
    printf("%d", ft_isascii(b));
    printf("%d", ft_isascii(c));
    printf("%d", ft_isascii(d));
    printf("%d", ft_isascii(e));
    return (0);
}*/