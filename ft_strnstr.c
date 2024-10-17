/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:36:40 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/15 18:40:25 by akovalch         ###   ########.fr       */
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
	if (little_len > len)
		return (0);
	while (i + little_len <= len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*str = "";
	const char	*find = "xx";
	size_t	n = 4294967295;
	char	*result = ft_strnstr(str, find, n);
	printf("My func = %s\n", result);
	return (0);
} */
