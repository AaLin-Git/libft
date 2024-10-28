/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lyssa <Lyssa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:00:11 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/28 09:12:23 by Lyssa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	i = 0;
	if (p_dest < p_src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			p_dest[n - 1] = p_src[n - 1];
			n--;
		}
	}
	return (p_dest);
}

/* int	main(void)
{
	char	src[] = "1234567890";
	size_t size;

	size = 6;
	ft_memmove(src + 4, src, size);
	printf("My func ft_memmove = %s\n", src);
	return (0);
} */
