/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:48:56 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/08 15:54:37 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int			ft_isalpha(int c)
{
	return (isupper(c) || islower(c));
}
