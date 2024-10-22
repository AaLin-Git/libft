/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:05:49 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/22 17:35:34 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	//if (size > SIZE_MAX / nmemb)
	//	return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}

/* int	main(void)
{
	int		*arr;
	size_t	i = 0;
	size_t	nmemb = 5;
	size_t	size = sizeof(int);

	arr = (int *)ft_calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Error, can't allocate the memory\n");
		return (1);
	}
	while (i < nmemb)
	{
		if (arr[i] != 0)
		{
			printf("Error\n");
			free(arr);
			return (1);
		}
		i++;
	}
	printf("It works\n");
	free(arr);
	return (0);
} */
