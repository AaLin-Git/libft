/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:07:32 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/17 15:21:22 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
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
	char	*result;
	int		i;
	int		j;
	int		start;

	count = count_words(s, c);
	result = malloc ((count + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		
	}
} */

/* int	main(void)
{
	char	**words;
	int		i;

	words = ft_split("Hello World How Are You", ' ');
	i = 0;
	while (words[i])
	{
		printf("Word %d: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
} */
