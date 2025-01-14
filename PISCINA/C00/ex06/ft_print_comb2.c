/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:00:33 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/12 08:47:06 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				d = '1';
				while (d <= '9')
				{
					if ((((a - 48) * 10) + ((b - 48) * 1)) < (((c - 48) * 10) + ((d - 48) * 1)))
					{
						write (1, &a, 1);
						write (1, &b, 1);
						write (1, " ", 1);
						write (1, &c, 1);
						write (1, &d, 1);
						if (a < '9' || b < '8' || c < '9' || d < '9')
							write (1, ", ", 2);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

/* int main()
{
	ft_print_comb2();
	return 0;
} */
