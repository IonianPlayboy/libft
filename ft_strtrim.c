/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:17:09 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 17:08:56 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while(set[i] && set[i] != c)
		i++;
	return (set[i] == c ? 1 : 0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		max;
	int		start;
	int		len;

	len = ft_strlen(s1);
	start = 0;
	max = len;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	if (start == len)
		start = 0;
	else
	{
		while(max > start && is_in_set(s1[max], set))
			max--;
		if (max == start)
			max = len;
	}
	result = ft_substr(s1, start, max - start + 1);
	return (result);
}
