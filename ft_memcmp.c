/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memvcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:31:35 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/09 15:21:23 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(void const *s1, void const *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
