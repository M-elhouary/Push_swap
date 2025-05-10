/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:44:02 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/12 21:50:19 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	assign_indices(t_stack *stack, int *sorted)
{
	int	*indices;
	int	i;
	int	j;

	indices = malloc(sizeof(int) * stack->size);
	if (!indices)
		return ;
	i = -1;
	while (++i < stack->size)
	{
		j = -1;
		while (++j < stack->size)
		{
			if (stack->numbers[i] == sorted[j])
			{
				indices[i] = j;
				break ;
			}
		}
	}
	i = -1;
	while (++i < stack->size)
		stack->numbers[i] = indices[i];
	free(indices);
}

int	*create_sorted_array(t_stack *stack)
{
	int	*sorted;
	int	i;
	int	j;
	int	temp;
	int	*original;

	sorted = malloc(sizeof(int) * stack->size);
	original = malloc(sizeof(int) * stack->size);
	if (!sorted || !original)
		return (free(sorted), free(original), NULL);
	i = -1;
	while (++i < stack->size)
		1 && (sorted[i] = stack->numbers[i], original[i] = stack->numbers[i]);
	i = -1;
	while (++i < stack->size - 1)
	{
		j = -1;
		while (++j < stack->size - i - 1)
		{
			if (sorted[j] > sorted[j + 1])
				1 && (temp = sorted[j], sorted[j] = sorted[j + 1],
					sorted[j + 1] = temp);
		}
	}
	return (assign_indices(stack, sorted), free(sorted), original);
}

void	restore_values(t_stack *stack_a, int *original)
{
	int	i;
	int	*new_values;

	new_values = malloc(sizeof(int) * stack_a->capacity);
	if (!new_values)
		return ;
	i = 0;
	while (i < stack_a->size)
	{
		new_values[i] = original[stack_a->numbers[i]];
		i++;
	}
	i = 0;
	while (i < stack_a->size)
	{
		stack_a->numbers[i] = new_values[i];
		i++;
	}
	free(new_values);
}
