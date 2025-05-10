/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:54 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:55 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	chunk_size(int size)
{
	if (size > 150)
		return (30);
	return (15);
}

void	handle_reverse_order(t_stack *stack_a, t_stack *stack_b)
{
	int	size;

	size = stack_a->size;
	while (size > 0)
	{
		rra(stack_a);
		pb(stack_b, stack_a);
		size--;
	}
}

void	move_to_b(t_stack *stack_a, t_stack *stack_b)
{
	if (is_reverse_ordered(stack_a) && stack_a->size >= 499)
		handle_reverse_order(stack_a, stack_b);
	else
		process_standard_sort(stack_a, stack_b);
}

void	move_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;

	while (stack_b->size > 0)
	{
		pos = find_max_pos(stack_b);
		if (pos <= stack_b->size / 2)
		{
			while (pos-- > 0)
				rb(stack_b);
		}
		else
		{
			while (pos++ < stack_b->size)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}

void	sort_large(t_stack *stack_a, t_stack *stack_b)
{
	int	*original_values;

	if (is_sorted(stack_a))
		return ;
	original_values = create_sorted_array(stack_a);
	if (!original_values)
		return ;
	move_to_b(stack_a, stack_b);
	move_to_a(stack_a, stack_b);
	restore_values(stack_a, original_values);
	free(original_values);
}
