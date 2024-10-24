/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:25:00 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/24 15:22:35 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *content)
{
	(void)content;
} */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nextnode;

	node = *lst;
	nextnode = *lst;
	while (node != NULL)
	{
		nextnode = nextnode->next;
		del(node->content);
		free(node);
		node = nextnode;
	}
	*lst = NULL;
}

/* int	main(void)
{
	char *data1 = "Hello";
	char *data2 = " ";
	char *data3 = "world";
	char *data4 = "!";
	t_list *elem1 = ft_lstnew(data1);
	t_list *elem2 = ft_lstnew(data2);
	elem1->next = elem2;
	t_list *elem3 = ft_lstnew(data3);
	elem2->next = elem3;
	t_list *elem4 = ft_lstnew(data4);
	elem3->next = elem4;
	int size = ft_lstsize(elem1);
	printf("size is: %d\n", size);
	ft_lstclear(&elem1, del);
	size = ft_lstsize(elem1);
	printf("size is: %d\n", size);
	return (0);
} */
