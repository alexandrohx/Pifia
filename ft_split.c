/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliang-h <aliang-h@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:55:35 by aliang-h          #+#    #+#             */
/*   Updated: 2024/05/31 12:03:47 by aliang-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// conteo de palabras (substrings)
// liberar memoria
// longitud de las cadenas
//
// propia funcion split llamando a las anteriores 

static int	ft_countwords(const char *str, char c);
static char	**ft_free(char **str, int i);
static int	ft_wordlen(const char *str, char c);

char	**ft_split(const char *str, char c)
{
	char	**array;
	int		i;
	int		start;
	int		words;

	if (!str)
		return (NULL);
	words = ft_countwords(str, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		while (str[start] == c)
			start++;
		array[i] = ft_substr(str, start, ft_wordlen(str + start, c));
		if (!array[i])
			return (ft_free(array, i));
		start += ft_wordlen(str + start, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}

static char	**ft_free(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	ft_wordlen(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}
