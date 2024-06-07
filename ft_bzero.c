/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliang-h <aliang-h@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:19:24 by aliang-h          #+#    #+#             */
/*   Updated: 2024/05/31 11:44:28 by aliang-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tptr;

	tptr = (char *)s;
	while (n > 0)
	{
		*tptr = 0;
		tptr++;
		n--;
	}
}
/*
{
    memset(s, 0, n);
}

s:  puntero al bloque de memoria que quieres modificar
0: valor que quieres poner en el bloque de memoria
n: numero de bytes que quieres modificar
*/
