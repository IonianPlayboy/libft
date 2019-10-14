/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:55:51 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/14 15:04:53 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_empty_string(void)
{
	char	*result;

	if (!(result = malloc(sizeof(char) * 1)))
		return (NULL);
	result[0] = '\0';
	return (result);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const		*temp;
	char			*result;
	int				curr_len;
	int				i;

	temp = (s + start);
	if (len < 0)
		return (NULL);
	else if (len == 0)
		return (create_empty_string());
	if (start > ft_strlen(s))
		return (create_empty_string());
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
