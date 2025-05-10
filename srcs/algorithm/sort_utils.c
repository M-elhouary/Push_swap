/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:59 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:44:00 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min_pos(t_stack *stack)
{
	int	min;
	int	pos;
	int	i;

	min = stack->numbers[0];
	pos = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->numbers[i] < min)
		{
			min = stack->numbers[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	find_max_pos(t_stack *stack)
{
	int	max;
	int	pos;
	int	i;

	max = stack->numbers[0];
	pos = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->numbers[i] > max)
		{
			max = stack->numbers[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	is_reverse_ordered(t_stack *stack)
{
	int	i;
	int	consecutive_desc;

	if (stack->size <= 1)
		return (0);
	consecutive_desc = 0;
	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->numbers[i] > stack->numbers[i + 1])
			consecutive_desc++;
		i++;
	}
	if (consecutive_desc >= stack->size * 9 / 10)
		return (1);
	return (0);
}

int	detect_pattern(t_stack *stack)
{
	int	diff;
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < stack->size - 1)
	{
		diff = stack->numbers[i] - stack->numbers[i + 1];
		if (diff == 2 || diff == 3 || diff == 4)
			count++;
		i++;
	}
	if (count * 10 >= stack->size * 6)
		return (1);
	return (0);
}

void	process_standard_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	range;

	i = 0;
	range = chunk_size(stack_a->size);
	while (stack_a->size > 0)
	{
		if (stack_a->numbers[0] <= i)
		{
			pb(stack_b, stack_a);
			i++;
		}
		else if (stack_a->numbers[0] <= i + range)
		{
			pb(stack_b, stack_a);
			rb(stack_b);
			i++;
		}
		else if (detect_pattern(stack_a))
			rra(stack_a);
		else
			ra(stack_a);
	}
}
