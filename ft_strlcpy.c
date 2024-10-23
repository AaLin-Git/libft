/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:32:15 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 17:40:22 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t	size)
{
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_length);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}

/* int	main(void)
{
	char	dest[] = "Hello ";
	const char	src[] = "world!!!";
	size_t size;

	size = 15;
	int	my_func = ft_strlcpy(dest, src, size);
	printf("My func ft_strlcpy = %d\n", my_func);
	return (0);
} */
