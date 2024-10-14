/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:00:33 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 16:18:40 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	result;
	size_t	i;

	result = 0;
	i = 0;
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
	{
		result = 0 - s2[i];
	}
	else if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	return (result);
}

/* int main(void)
{
	size_t	n = 15;
	const char	str1[]= "The";
	const char	str2[]= " The sign  of  a  nonzero return value";

	int	result = ft_strncmp(str1, str2, n);
	printf("Result = %d\n", result);
	return (0);
} */
