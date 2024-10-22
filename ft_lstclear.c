/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:25:00 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/22 16:40:29 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nextnode;

	node = *lst;
	nextnode = *lst;
	while (node != NULL)
	{
		nextnode = nextnode->next;
		ft_lstdelone(node, del);
		node = nextnode;
	}
	*lst = NULL;
}
