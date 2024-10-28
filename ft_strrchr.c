/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lyssa <Lyssa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:28 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/28 09:03:15 by Lyssa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[length]);
	while (length >= 0)
	{
		if (s[length] == (char)c)
			return ((char *)&s[length]);
		length--;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "bonjour";
	int c = 98;
	char	*result = ft_strrchr(str, c);
	char	*orig = strrchr(str, c);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
} */
