/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 16:02:23 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 16:02:23 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
Returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes 
(treated as unsigned charvalues, so that ‘\200’ is greater than ‘\0’, for example).  Zero-length strings are always identical.  
This behavior is not required by C and portable code should only depend on the sign of the returned value.*/

// Incluímos nuestra librería
#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{

}