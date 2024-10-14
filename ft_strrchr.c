/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:28 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 17:51:11 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;
	int	i;

	length = ft_strlen(s);
	i = 0;
	if (c == '\0')
	{
		return ((char *)&s[length]);
	}
	while (length > 0)
	{
		if (s[length] == c)
		{
			return ((char *)&s[length]);
		}
		length--;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "Reproduce the behavior of the function strstr";
	int c = 114;
	char	*result = ft_strrchr(str, c);
	char	*orig = strrchr(str, c);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
} */
