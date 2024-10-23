/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:57 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 15:38:44 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
    ft_lstadd_front(&elem1, elem4);
	printf("first element is: %s\n", (char *)elem1->content);
	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
} */
