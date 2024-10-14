/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:36:40 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 17:39:02 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (i <= len - little_len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, len) == 0)
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "Reproduce the behavior of the function strstr";
	const char	*find = "the";
	size_t	n = 0;
	char	*result = ft_strnstr(str, find, n);

	printf("My func = %s\n", result);
	return (0);
} */
