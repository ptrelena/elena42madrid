/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elenpere <elenpere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-18 09:03:30 by elenpere          #+#    #+#             */
/*   Updated: 2025-02-18 09:03:30 by elenpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**words_dst;
	int	i;
	int	j;

	i = 0;
	j = 0;
	words_dst = (char **)ft_calloc(sizeof(char *), ft_count_words(s, c) + 1);//**ptr space
	if (!words_dst)
		return (NULL);
	while(s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if(s[i])
		{
			words_dst[j] = ft_printword((char *)s + i, c);
			if (!words_dst[j])
				return(ft_freespace(words_dst, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	words_dst[j] = NULL;
	return (words_dst);
}

//count array words
static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	w_count;

	i = 0;
	w_count = 0; //start from 1 word always
	if (!s)
		return (-1);//returns 0 if !words_dst
	while(s[i] != '\0')
	{
		while(s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			w_count++; //if equal +1 word
			while(s[i] && s[i] != c)
				i++;
		}
	}
	return (w_count);
}

//count word letters
static size_t	ft_count_letters(const char *s, char c)
{
	size_t	l_count;

	l_count = 0;
	while(s[l_count] != '\0' && s[l_count] != c)
		l_count++;
	return(l_count);
}

//print
static char	*ft_printword(char const *s, char c)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = ft_calloc((ft_count_letters(s, c) + 1), sizeof(char));
	if(!dest)
		return (NULL);
	while(s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//free space
static void	*ft_freespace(char **arr, size_t delete)
{
	while(delete > 0)
		free(arr[--delete]);
	free(arr);
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>

// char **ft_split(char const *s, char c); // Declaración de la función

// int main()
// {
//     char *cadena = "Hola  mundo esto es C  ";  // Cadena de prueba con múltiples espacios
//     char delimitador = ' ';                    // Delimitador de separación
//     char **resultado = ft_split(cadena, delimitador); // Ejecutar la función

//     if (!resultado) // Verificar si la función devolvió NULL
//     {
//         printf("Error: No se pudo reservar memoria.\n");
//         return 1;
//     }

//     // Imprimir el resultado
//     int i = 0;
//     while (resultado[i])
//     {
//         printf("Palabra %d: %s\n", i, resultado[i]);
//         free(resultado[i]); // Liberar memoria de cada palabra
//         i++;
//     }
    
//     free(resultado); // Liberar el array de punteros

//     return 0;
// }
