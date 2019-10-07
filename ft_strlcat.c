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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = 0;
	while (src[src_size])
		src_size++;
	dest_size = 0;
	while (*dest)
	{
		dest++;
		dest_size++;
	}
	if (size < dest_size + 2)
		return ((size > dest_size ? dest_size : size) + src_size);
	i = 0;
	while ((dest_size + i < size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dest[i] = '\0';
	return (dest_size + src_size);
}
