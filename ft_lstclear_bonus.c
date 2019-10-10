/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:48:48 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/10 14:27:13 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr_elem;
	t_list *elem_to_clear;

	curr_elem = *lst;
	while (curr_elem)
	{
		elem_to_clear = curr_elem;
		curr_elem = curr_elem->next;
		ft_lstdelone(elem_to_clear, del);
	}
	*lst = NULL;
}
