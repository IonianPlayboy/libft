/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:12:33 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/11 11:47:13 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0 || dst == src)
		return (dst);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n--)
		*s1++ = *s2++;
	return (dst);
}
