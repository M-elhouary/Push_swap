/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:47:04 by mel-houa          #+#    #+#             */
/*   Updated: 2025/04/07 21:47:05 by mel-houa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_chunk_data
{
	int	min;
	int	chunk_size;
	int	num_chunks;
}		t_chunk_data;

typedef struct s_stack
{
	int	size;
	int	capacity;
	int	*numbers;
}		t_stack;

int		parse_input(int argc, char **argv, t_stack *stack_a);
int		check_limits(const char *str);
int		init_stack(t_stack *stack, int capacity);
int		is_valid_number(char *str);
int		has_duplicate(t_stack *stack, int num);
void	ft_free_split(char **split);
int		count_total_numbers(int argc, char **argv);
int		find_min_pos(t_stack *stack);
int		find_max_pos(t_stack *stack);
void	sort_small(t_stack *stack_a, t_stack *stack_b);
void	sort_large(t_stack *stack_a, t_stack *stack_b);
void	move_to_a(t_stack *stack_a, t_stack *stack_b);
void	move_to_b(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_b, t_stack *stack_a);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
int		is_sorted(t_stack *stack);
int		*create_sorted_array(t_stack *stack);
void	assign_indices(t_stack *stack, int *sorted);
void	restore_values(t_stack *stack_a, int *original);
int		detect_pattern(t_stack *stack);
int		chunk_size(int size);
int		is_reverse_ordered(t_stack *stack);
void	process_standard_sort(t_stack *stack_a, t_stack *stack_b);

#endif
