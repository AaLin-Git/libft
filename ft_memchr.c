/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:44:18 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 18:56:57 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			length;
	size_t			i;
	unsigned char	*str;

	length = ft_strlen(s);
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str[] = "Reproduce the behavior of the function strstr";
	char	*result = ft_memchr(str, ' ', 15);
	char	*orig = memchr(str, ' ', 15);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
} */
