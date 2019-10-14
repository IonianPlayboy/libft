/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:28:32 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/14 16:12:28 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*new;

	if (lst && f)
	{
		new = ft_lstnew(f(lst->content));
		new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}
