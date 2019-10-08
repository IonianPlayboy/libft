/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:49:16 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 17:27:08 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, unsigned int len)
{
	char			*result;
	unsigned int	nb_searched;
	int				i;
	int				is_found;

	result = (char *)big;
	if (!*little)
		return (result);
	nb_searched = 0;
	while (*result && !is_found && nb_searched < len)
	{
		nb_searched++;
		i = 0;
		while (result[i] == little[i] && nb_searched + i <= len)
			i++;
		if (!little[i])
			is_found = 1;
		else
			result++;
	}
	return (is_found ? result : NULL);
}
