/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:25:54 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/24 16:46:34 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*f(void *data)
{
	char	*original = (char *)data;
	char	*uppercase;
	int		i;

	i = 0;
	uppercase = malloc(ft_strlen(original) + 1);
	if (uppercase == NULL)
		return (NULL);
	while (original[i] != '\0')
	{
		uppercase[i] = ft_toupper(original[i]);
		i++;
	}
	uppercase[i] = '\0';
	return (uppercase);
}

void	del(void *content)
{
	free(content);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
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


	t_list	*result = ft_lstmap(elem1, f, del);
	while (result)
	{
		printf("%s\n", (char *)result->content);
		result = result->next;
	}
	ft_lstclear(&result, del);
	return (0);
} */
