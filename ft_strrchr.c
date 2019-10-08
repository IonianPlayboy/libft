/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:23:14 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 16:37:24 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char *str;
	char *result;

	result = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			result = str;
		str++;
	}
	return (result);
}
