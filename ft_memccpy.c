/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:31:35 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 14:57:38 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != (unsigned char)c)
	{
		*((unsigned char *)dest++) = ((unsigned char *)src)[i];
		i++;
	}
	return (i == n ? NULL : (++dest));
}
