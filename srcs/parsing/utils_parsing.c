/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:39 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:40 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	has_duplicate(t_stack *stack, int num)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->numbers[i] == num)
			return (1);
		i++;
	}
	return (0);
}

void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

int	count_total_numbers(int argc, char **argv)
{
	int		i;
	int		total;
	int		count;
	char	**split;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		count = 0;
		while (split[count])
			count++;
		total += count;
		ft_free_split(split);
		i++;
	}
	return (total);
}

int	check_limits(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && num * -1 < INT_MIN))
			return (0);
		str++;
	}
	return (1);
}
