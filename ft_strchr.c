/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:21:10 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 17:39:42 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/* int	main(void)
{
	const char	*str = "teste";
	int c = 'e';
	char	*result = ft_strchr(str, c);
	//char	*orig = strchr(str, c);
	printf("My func = %s\n", result);
	//printf("Orig = %s\n", orig);
	return (0);
} */
