/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:07:32 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/23 17:30:34 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**parse_string(char const *s, char c)
{
	char	**lst;
	int		word_len;
	int		i;

	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (lst == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (parse_string(s, c));
}

/* int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("  Hello World     How Are  You ", ' ');
	i = 0;
	while (words[i])
	{
		printf("Word %d: %s\n", i, words[i]);
		//free(words[i]);
		i++;
	}
	free(words);
	return (0);
} */
