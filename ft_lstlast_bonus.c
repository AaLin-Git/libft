/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:07:07 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 15:31:48 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}

/* int	main(void)
{
	char *data1 = "Hello";
	char *data2 = " ";
	char *data3 = "world";
	t_list *elem1 = ft_lstnew(data1);
	t_list *elem2 = ft_lstnew(data2);
	elem1->next = elem2;
	t_list *elem3 = ft_lstnew(data3);
	elem2->next = elem3;
	t_list *last_elem = ft_lstlast(elem1);
	printf("last element is: %s\n", (char *)last_elem->content);
	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
} */
