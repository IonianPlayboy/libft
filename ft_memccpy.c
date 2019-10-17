/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:31:35 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/17 14:54:33 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (i < n && *s2 != (unsigned char)c)
	{
		*s1++ = *s2++;
		i++;
	}
	if (*s2 == (unsigned char)c)
		*s1++ = *s2;
	return (*s2 != (unsigned char)c ? NULL : (s1));
}
