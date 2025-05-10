/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:32 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:43:33 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	init_stack(t_stack *stack, int capacity)
{
	if (!stack)
		return (0);
	stack->numbers = (int *)malloc(sizeof(int) * capacity);
	if (!stack->numbers)
		return (0);
	stack->size = 0;
	stack->capacity = capacity;
	return (1);
}
