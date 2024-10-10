/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:38:32 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/10 16:03:20 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
	}
	return (c);
}

/* int	main(void)
{
	int result = ft_tolower(105);
	printf("%c", result);
	return (0);
} */
