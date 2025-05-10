/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:10 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:11 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *stack_a)
{
	int	tmp;
	int	i;

	if (stack_a->size < 2)
		return ;
	i = 0;
	tmp = stack_a->numbers[0];
	while (i < stack_a->size - 1)
	{
		stack_a->numbers[i] = stack_a->numbers[i + 1];
		i++;
	}
	stack_a->numbers[stack_a->size - 1] = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack_b)
{
	int	tmp;
	int	i;

	if (stack_b->size < 2)
		return ;
	i = 0;
	tmp = stack_b->numbers[0];
	while (i < stack_b->size - 1)
	{
		stack_b->numbers[i] = stack_b->numbers[i + 1];
		i++;
	}
	stack_b->numbers[stack_b->size - 1] = tmp;
	ft_printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	tmp;

	if (stack_a->size < 2 && stack_b->size < 2)
		return ;
	if (stack_a->size >= 2)
	{
		i = -1;
		tmp = stack_a->numbers[0];
		while (i++ < stack_a->size - 1)
			stack_a->numbers[i] = stack_a->numbers[i + 1];
		stack_a->numbers[stack_a->size - 1] = tmp;
	}
	if (stack_b->size >= 2)
	{
		i = -1;
		tmp = stack_b->numbers[0];
		while (i++ < stack_b->size - 1)
			stack_b->numbers[i] = stack_b->numbers[i + 1];
		stack_b->numbers[stack_b->size - 1] = tmp;
	}
	ft_printf("rr\n");
}
