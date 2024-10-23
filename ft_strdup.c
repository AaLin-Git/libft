/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:20:28 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 17:39:59 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*flag;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	flag = str;
	while (*s)
	{
		*str = *s;
		s++;
		str++;
	}
	*str = '\0';
	return ((char *)flag);
}

/* int	main(void)
{
	char	*result;

	result = ft_strdup("implicitly declaring library function");
	if (result == 0)
	{
		return (1);
	}
	printf("%s", result);
	free(result);
	return (0);
} */
