/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:36 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:37 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	process_numbers(char **split, t_stack *stack_a)
{
	int	j;
	int	number;

	j = 0;
	if (!split[0])
		return (ft_free_split(split), free(stack_a->numbers), 0);
	while (split[j])
	{
		if (!check_limits(split[j]) || !is_valid_number(split[j]))
			return (ft_free_split(split), free(stack_a->numbers), 0);
		number = ft_atoi(split[j]);
		if (has_duplicate(stack_a, number))
			return (ft_free_split(split), free(stack_a->numbers), 0);
		stack_a->numbers[stack_a->size++] = number;
		j++;
	}
	return (1);
}

int	parse_input(int argc, char **argv, t_stack *stack_a)
{
	int		i;
	char	**split;

	i = 1;
	if (!init_stack(stack_a, count_total_numbers(argc, argv)))
		return (0);
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (free(stack_a->numbers), 0);
		if (!process_numbers(split, stack_a))
			return (0);
		ft_free_split(split);
		i++;
	}
	return (1);
}
