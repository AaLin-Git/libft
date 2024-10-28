/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lyssa <Lyssa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:36:40 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/28 09:37:13 by Lyssa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i <= len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
			}
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
