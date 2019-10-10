/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:28:32 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/10 18:49:31 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*result;
	t_list	*prev_el;
	t_list	*curr_el;

	result = (*f)(lst->content);
	prev_el = result;
	lst = lst->next;
	while (lst)
	{
		curr_el = (*f)(lst->content);
		prev_el->next = curr_el;
		prev_el = prev_el->next;
		lst = lst->next;
	}
	return (result);
}
