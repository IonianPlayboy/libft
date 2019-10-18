/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:28:32 by alabreui          #+#    #+#             */
/*   Updated: 2019/10/18 12:28:34 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;

	if (lst && f)
	{
		if (!(new = ft_lstnew(f(lst->content))))
			return (NULL);
		next = ft_lstmap(lst->next, f, del);
		if (!next && lst->next)
		{
			ft_lstdelone(new, del);
			return (NULL);
		}
		new->next = next;
		return (new);
	}
	return (NULL);
}
