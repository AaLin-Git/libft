/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:21:10 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/16 12:14:31 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "teste";
	int c = '\0';
	char	*result = ft_strchr(str, c);
	char	*orig = strchr(str, c);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
} */
