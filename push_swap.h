/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcostant <tcostant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:21:20 by timoteo           #+#    #+#             */
/*   Updated: 2026/01/28 15:06:20 by tcostant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

//utility functions

int		bit_depth(int number);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);
void	free_stack(t_stack *stack);
t_stack	*parse_input(int argc, char **argv, t_stack *stack);
t_stack	*init_stack(void);

//swap functions

void	swap(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

//push functions

void	push(t_stack *from, t_stack *to);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

//rotate functions

void	rotate(t_stack *stack);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);

//reverse rotate functions

void	reverse_rotate(t_stack *stack);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

#endif
