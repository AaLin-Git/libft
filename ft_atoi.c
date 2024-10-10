/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:45:42 by akovalch          #+#    #+#             */
/*   Updated: 2024/10/10 17:20:12 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void	inner_loop(char *str, int *num, int *negative)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		*num = *num * 10 + (str[i] - '0');
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	num;
	int	negative;

	num = 0;
	negative = 1;
	inner_loop(str, &num, &negative);
	num *= negative;
	return (num);
} */
