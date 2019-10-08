/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:58:19 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 15:33:08 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	get_nb_words(char const *str, char c)
{
	int		result;

	result = 0;
	while (*str)
	{
		if (!is_separator(*str, c))
			result++;
		while (*str && !is_separator(*str, c))
			str++;
		while (*str && is_separator(*str, c))
			str++;
	}
	return (result);
}

static void	write_str(char **result, char const *str, int nb_word, char c)
{
	int		i;

	i = 0;
	while (str[i] && !is_separator(str[i], c))
	{
		result[nb_word - 1][i] = str[i];
		i++;
	}
}

static int	write_result(char **result, char const *str, char c)
{
	int		nb_word;
	int		length;

	nb_word = 0;
	while (*str)
	{
		while (is_separator(*str, c))
			str++;
		length = 0;
		while (str[length] && !is_separator(str[length], c))
			length++;
		if (length != 0)
		{
			nb_word++;
			if (!(result[nb_word - 1] =
					(char *)malloc(sizeof(char) * (length + 1))))
				return (0);
			result[nb_word - 1][length] = '\0';
			write_str(result, str, nb_word, c);
			str = str + length;
		}
		while (*str && is_separator(*str, c))
			str++;
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**result;

	nb_words = get_nb_words(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (NULL);
	result[nb_words] = NULL;
	if (!write_result(result, s, c))
		return (NULL);
	return (result);
}
