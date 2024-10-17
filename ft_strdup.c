/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:20:28 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/16 15:56:43 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}

/* int	main(void)
{
	char	*result;

	result = ft_strdup("gjgjghj");
	if (result == 0)
	{
		return (1);
	}
	printf("%s", result);
	free(result);
	return (0);
} */
