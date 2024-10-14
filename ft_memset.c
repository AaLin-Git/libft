/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:51:41 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/14 18:18:59 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	*str = "Reproduce the behavior of the function strstr";
	char	*result = ft_memset(str, 'A', 5);
	char	*orig = memset(str, 'A', 5);
	printf("My func = %s\n", result);
	printf("Orig = %s\n", orig);
	return (0);
}
