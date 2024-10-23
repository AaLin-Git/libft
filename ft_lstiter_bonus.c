/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:52:18 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 16:29:39 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void f(void *data) {
    printf("%s\n", (char *)data);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* int	main(void)
{
	char	*data1 = "Hello";
	char	*data2 = " ";
	char	*data3 = "world";
	t_list	*elem1 = ft_lstnew(data1);
	t_list	*elem2 = ft_lstnew(data2);
	t_list	*elem3 = ft_lstnew(data3);

	elem1->next = elem2;
	elem2->next = elem3;


	ft_lstiter(elem1, f);
	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
} */
