/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:55:51 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 17:08:22 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const		*temp;
	char			*result;
	int				curr_len;
	int				i;

	temp = (s + start);
	curr_len = ft_strlen(temp) < len ? ft_strlen(temp) : len;
	if (!(result = malloc(sizeof(char) * (curr_len + 1))))
		return (NULL);
	i = 0;
	while (i < curr_len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}