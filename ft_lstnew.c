/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:05:44 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/22 15:10:27 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
