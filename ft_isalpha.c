/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:48:56 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/07 15:52:36 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
