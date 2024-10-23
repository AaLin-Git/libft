/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:13:14 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 15:37:06 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	lastnode = ft_lstlast(*lst);
	if (!lastnode)
		*lst = new;
	else
		lastnode->next = new;
}

/* int	main(void)
{
	char *data1 = "Hello";
	char *data2 = " ";
	char *data3 = "world";
	t_list *elem1 = ft_lstnew(data1);
	t_list *elem2 = ft_lstnew(data2);
	t_list *elem3 = ft_lstnew(data3);
	elem1->next = elem2;
	elem2->next = elem3;
	char *data4 = "!";
    t_list *elem4 = ft_lstnew(data4);
    ft_lstadd_back(&elem1, elem4);
	t_list *last_elem = ft_lstlast(elem1);
	printf("last element is: %s\n", (char *)last_elem->content);
	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
} */
