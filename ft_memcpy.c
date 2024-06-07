/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliang-h <aliang-h@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:18:54 by aliang-h          #+#    #+#             */
/*   Updated: 2024/05/04 16:35:13 by aliang-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_o;

	if (!dst && !src)
		return (NULL);
	tmp_d = (unsigned char *) dst;
	tmp_o = (unsigned char *) src;
	while (n > 0)
	{
		*tmp_d = *tmp_o;
		tmp_d++;
		tmp_o++;
		n--;
	}
	return (dst);
}
