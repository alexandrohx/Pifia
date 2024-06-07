/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliang-h <aliang-h@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:23:38 by aliang-h          #+#    #+#             */
/*   Updated: 2024/05/08 15:23:51 by aliang-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastocc;

	lastocc = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			lastocc = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (lastocc);
}
