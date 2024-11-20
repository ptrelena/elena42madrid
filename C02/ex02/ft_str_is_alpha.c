/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:08:34 by elenpere          #+#    #+#             */
/*   Updated: 2024/11/20 16:34:10 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if ("64" < str  < "91" || "96" < str  < "123" || str == "32")
		return (1);
	else
		return (0);
}

int	main()
{
	str [] = "hello";

	ft_str_is_alpha(str);
	return (void);
}
