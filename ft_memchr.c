/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:31:35 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/18 15:24:29 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n - 1 && s1[i] != (unsigned char)c)
		i++;
	return (s1[i] == (unsigned char)c ?
		(void *)(s1 + i) :
		NULL);
}
