/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:25:54 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/22 16:30:11 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	newlist = 0;
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
