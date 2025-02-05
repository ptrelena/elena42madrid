/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-16 15:57:19 by elenpere          #+#    #+#             */
/*   Updated: 2025-01-16 15:57:19 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a char)
in the string pointed to by s.  The terminating null character is considered to
be part of the string; therefore if c is ‘\0’, the functions locate the
terminating ‘\0’. The strrchr() function is identical to strchr(), except it
locates the last occurrence of c.*/

char   *ft_strrchr(const char *s, int c)
