/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:11:49 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/14 14:27:48 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	res;

	len = 0;
	while (dst[len] != '\0')
		++len;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (dstsize <= len)
		res += dstsize;
	else
		res += len;
	i = 0;
	while (src[i] != '\0' && i + len + 1 < dstsize)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (res);
}
