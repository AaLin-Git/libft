/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:11:39 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/18 18:27:35 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c = 'b');
	return (c = 'A');
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = ft_strlen(s);
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char *str = "incompatible pointer to integer conversion";
	char *result = ft_strmapi(str, f);
	printf("%s", result);
	free(result);
	return (0);
} */