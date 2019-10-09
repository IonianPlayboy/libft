/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:33:19 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 13:13:01 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nb, unsigned int size)
{
	void			*result;
	unsigned int	i;

	if (!(result = malloc(nb * size)))
		return (NULL);
	i = 0;
	while (i < nb * size)
		((char *)result)[i++] = '\0';
	return (result);
}
