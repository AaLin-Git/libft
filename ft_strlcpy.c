/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:32:15 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/10 17:20:29 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	str_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	dest_length = str_length(dest);
	src_length = str_length(src);
	i = 0;
	if (size < 0)
	{
		return (size + src_length);
	}
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
} */
