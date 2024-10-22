/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:07:32 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/22 14:41:34 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;
	int		i;
	int		j;
	int		start;

	count = count_words(s, c);
	i = 0;
	j = 0;
	start = -1;
	result = malloc((count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i + 1] == '\0' && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			j++;
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
} */

int	ft_countword(char const *s, char c)
{
	int	count;
	if (!*s)
		return (0);
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
char	**ft_split(char const *s, char c)
{
	char	**lst;
	int	word_len;
	int		i;
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
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
