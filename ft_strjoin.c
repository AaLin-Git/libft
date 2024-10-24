/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:03:42 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/24 14:46:24 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*start;

	if (!s1 || !s2)
		return (0);
	newstr = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	start = newstr;
	while (*s1)
	{
		*newstr = *s1;
		s1++;
		newstr++;
	}
	while (*s2)
	{
		*newstr = *s2;
		s2++;
		newstr++;
	}
	*newstr = '\0';
	return (start);
}

/* int	main(void)
{
	char	*str1 = "Hello ";
	char	*str2 = "world!";
	char *result = ft_strjoin(str1, str2);
	printf("%s", result);
	free(result);
	return (0);
} */
