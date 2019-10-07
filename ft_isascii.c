/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:06:50 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/07 16:07:53 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isascii(int c)
{
	return (c >= 0 && c < 128);
}
