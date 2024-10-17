/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:03:42 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/16 15:52:18 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	newstr = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* int	main(void)
{
	char	*str1[] = "Hello ";
	char	*str2[] = "world!";
	printf("%s", dest);
	return (0);
} */
