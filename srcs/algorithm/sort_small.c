/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:57 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:58 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->numbers[i] > stack->numbers[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	sort_two(t_stack *stack_a)
{
	if (stack_a->numbers[0] > stack_a->numbers[1])
		sa(stack_a);
}

void	sort_three(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	1 && (a = stack_a->numbers[0], b = stack_a->numbers[1],
		c = stack_a->numbers[2]);
	if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a);
}

void	sort_4or5(t_stack *stack_a, t_stack *stack_b)
{
	int	min_pos;

	while (stack_a->size > 3)
	{
		min_pos = find_min_pos(stack_a);
		if (min_pos <= stack_a->size / 2)
		{
			while (min_pos-- > 0)
				ra(stack_a);
		}
		else
		{
			while (min_pos++ < stack_a->size)
				rra(stack_a);
		}
		pb(stack_b, stack_a);
	}
	sort_three(stack_a);
	while (stack_b->size > 0)
		pa(stack_a, stack_b);
}

void	sort_small(t_stack *stack_a, t_stack *stack_b)
{
	int	size;

	if (is_sorted(stack_a))
		return ;
	size = stack_a->size;
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size <= 5)
		sort_4or5(stack_a, stack_b);
}
