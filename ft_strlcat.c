/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:11:49 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/07 15:45:36 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	unsigned int	src_size;
	unsigned int	size;
	unsigned int	i;

	src_size = 0;
	while (src[src_size])
		src_size++;
	size = 0;
	while (*dst)
	{
		dst++;
		size++;
	}
	if (dstsize < size + 2)
		return ((dstsize > size ? size : dstsize) + src_size);
	i = 0;
	while ((size + i < dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size + i < size)
		dst[i] = '\0';
	return (size + src_size);
}
