/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:12:33 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 14:49:29 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void const *src, unsigned int n)
{
	unsigned int	i;

	if (dest > src)
	{
		i = 1;
		while (i <= n)
		{
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
