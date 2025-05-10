/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:23 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:24 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	int	tmp;

	if (stack_a->size < 2)
		return ;
	tmp = stack_a->numbers[0];
	stack_a->numbers[0] = stack_a->numbers[1];
	stack_a->numbers[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	tmp;

	if (stack_b->size < 2)
		return ;
	tmp = stack_b->numbers[0];
	stack_b->numbers[0] = stack_b->numbers[1];
	stack_b->numbers[1] = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;

	if (stack_a->size < 2 && stack_b->size < 2)
		return ;
	if (stack_a->size >= 2)
	{
		tmp = stack_a->numbers[0];
		stack_a->numbers[0] = stack_a->numbers[1];
		stack_a->numbers[1] = tmp;
	}
	if (stack_b->size >= 2)
	{
		tmp = stack_b->numbers[0];
		stack_b->numbers[0] = stack_b->numbers[1];
		stack_b->numbers[1] = tmp;
	}
	ft_printf("ss\n");
}
