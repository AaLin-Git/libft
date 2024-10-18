/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:33:14 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/18 18:50:21 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'b';
	else
		*c = 'A';
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "incompatible pointer to integer conversion";

	ft_striteri(str, f);
	printf("%s", str);
	return (0);
} */
