/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:36:11 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/17 14:55:02 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (*alst)
	{
		while (*alst && (*alst)->next)
			alst = &(*alst)->next;
		(*alst)->next = new;
	}
	else
		*alst = new;
}
