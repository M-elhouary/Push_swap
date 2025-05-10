/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:43:28 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/12 22:50:29 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	void	ft_free_exit(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a);
	free(stack_b);
	write(2, "Error\n", 6);
	exit(1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	stack_b = malloc(sizeof(t_stack));
	if (!stack_b)
		return (free(stack_a), 0);
	if (!parse_input(ac, av, stack_a))
		ft_free_exit(stack_a, stack_b);
	if (!init_stack(stack_b, stack_a->capacity))
		return (free(stack_a->numbers), free(stack_a), free(stack_b), 0);
	if (stack_a->size <= 5)
		sort_small(stack_a, stack_b);
	else
		sort_large(stack_a, stack_b);
	free(stack_a->numbers);
	free(stack_b->numbers);
	free(stack_a);
	free(stack_b);
}
