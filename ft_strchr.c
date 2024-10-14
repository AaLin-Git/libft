/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:21:10 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 17:50:27 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	length;
	int	i;

	length = ft_strlen(s);
	i = 0;
	if (c == '\0')
	{
		return ((char *)&s[length]);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "Reproduce the behavior of the function strstr";
	int c = 114;
	char	*result = ft_strchr(str, c);
	char	*orig = strchr(str, c);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
} */
