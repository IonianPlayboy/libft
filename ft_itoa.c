/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:03:24 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 14:59:03 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*zero_toa(void)
{
	char		*result;

	if (!(result = (char *)malloc(sizeof(char) * 1 + 1)))
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}

static void	write_result(char *result, long int nb, int length, int is_neg)
{
	long int	curr_nbr;
	int			i;

	if (is_neg)
		result[0] = '-';
	i = 0;
	curr_nbr = nb;
	while (curr_nbr != 0)
	{
		result[length - 1 + is_neg - i] = (curr_nbr % 10) + '0';
		curr_nbr = curr_nbr / 10;
		i++;
	}
	result[length + is_neg] = '\0';
}

char		*ft_itoa(int nbr)
{
	int			is_neg;
	int			length;
	long int	nb;
	long int	curr_nbr;
	char		*result;

	if (nbr == 0)
		return (zero_toa());
	is_neg = nbr < 0 ? 1 : 0;
	nb = nbr;
	nb = is_neg ? nb * -1 : nb;
	curr_nbr = nb;
	length = 0;
	while (curr_nbr != 0)
	{
		curr_nbr = curr_nbr / 10;
		length++;
	}
	result = 0;
	if (!(result = (char *)malloc(sizeof(char) * (length + is_neg) + 1)))
		return (NULL);
	write_result(result, nb, length, is_neg);
	return (result);
}
