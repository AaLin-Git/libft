/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:03:59 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 17:40:13 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = 0;
	if (size <= dest_length)
		return (size + src_length);
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

/* int	main(void)
{
	char	dest[] = "Hello ";
	const char	src[] = "world!!!";
	size_t size;

	size = 20;
	int	my_func = ft_strlcat(dest, src, size);
	printf("My func = %d\n", my_func);
	return (0);
} */
