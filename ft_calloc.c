/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliang-h <aliang-h@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:19:27 by aliang-h          #+#    #+#             */
/*   Updated: 2024/05/08 15:20:08 by aliang-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			total_size;
	size_t			i;

	total_size = count * size;
	tmp = malloc(total_size);
	if (tmp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
