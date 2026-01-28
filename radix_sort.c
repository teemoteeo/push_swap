/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcostant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:27:49 by tcostant          #+#    #+#             */
/*   Updated: 2026/01/28 14:42:06 by tcostant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	bit;
	int	min_val;
	int	size;
	int	i;
	int	normalized;

	size = stack_a->size;
	min_val = find_min(stack_a);
	bit = bit_depth(find_max(stack_a) - min_val);
	while (bit >= 0)
	{
		i = 0;
		while (i < size)
		{
			normalized = stack_a->top->value - min_val;
			if (((normalized >> bit) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			 i++;
		}
		// pa tutto da b a a
		while (stack_b->size > 0)
			push(stack_b, stack_a);
		bit--;
	}
}
