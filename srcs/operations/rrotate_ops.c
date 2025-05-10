/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:19 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:20 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *stack_a)
{
	int	i;
	int	tmp;

	if (stack_a->size < 2)
		return ;
	tmp = stack_a->numbers[stack_a->size - 1];
	i = stack_a->size - 1;
	while (i > 0)
	{
		stack_a->numbers[i] = stack_a->numbers[i - 1];
		i--;
	}
	stack_a->numbers[0] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack_b)
{
	int	i;
	int	tmp;

	if (stack_b->size < 2)
		return ;
	tmp = stack_b->numbers[stack_b->size - 1];
	i = stack_b->size - 1;
	while (i > 0)
	{
		stack_b->numbers[i] = stack_b->numbers[i - 1];
		i--;
	}
	stack_b->numbers[0] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;
	int	i;

	if (stack_a->size < 2 && stack_b->size < 2)
		return ;
	if (stack_a->size >= 2)
	{
		tmp = stack_a->numbers[stack_a->size - 1];
		i = stack_a->size;
		while (i-- > 1)
			stack_a->numbers[i] = stack_a->numbers[i - 1];
		stack_a->numbers[0] = tmp;
	}
	if (stack_b->size >= 2)
	{
		tmp = stack_b->numbers[stack_b->size - 1];
		i = stack_b->size;
		while (i-- > 1)
			stack_b->numbers[i] = stack_b->numbers[i - 1];
		stack_b->numbers[0] = tmp;
	}
	ft_printf("rrr\n");
}
