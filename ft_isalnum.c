/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:05:32 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/10 12:47:23 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0' || c > '9') && (c < 'A' || (c > 'Z' && c < 'a') || c > 'z'))
	{
		return (0);
	}
	return (1);
}

/* int	main(void)
{
	int result = ft_isalnum(3);
	printf("%d", result);
	return (0);
} */
