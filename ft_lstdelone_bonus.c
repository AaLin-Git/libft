/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:20:17 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 16:25:56 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	del(void *content)
{
	(void)content;
} */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* int	main(void)
{
	char	*data1 = "Hello";
	char	*data2 = " ";
	char	*data3 = "world";
	t_list	*elem1 = ft_lstnew(data1);
	t_list	*elem2 = ft_lstnew(data2);
	t_list *elem3 = ft_lstnew(data3);

	elem1->next = elem2;
	elem2->next = elem3;

	ft_lstdelone(elem1, del);
	print_list(elem2);

	ft_lstdelone(elem2, del);
	ft_lstdelone(elem3, del);
	return (0);
} */
