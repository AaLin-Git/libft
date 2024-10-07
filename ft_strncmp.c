/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:00:33 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/07 14:00:39 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	result;
	unsigned int	i;

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
