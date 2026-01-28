/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timoteo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:35:31 by timoteo           #+#    #+#             */
/*   Updated: 2026/01/28 14:09:56 by tcostant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack *stack)
{
	int		min;
	t_node	*number;

	number = stack->top;
	min = number->value;
	while (number)
	{
		if (number->value < min)
			min = number->value;
		number = number->next;
	}
	return (min);
}

int	find_max(t_stack *stack)
{
	int		max;
	t_node	*number;

	number = stack->top;
	max = number->value;
	while (number)
	{
		if (number->value > max)
			max = number->value;
		number = number->next;
	}
	return (max);
}

//OTTIMIZZAZIONE: quanti bit mi servono per rappresentare il numero maggiore

int	bit_depth(int max)
{
	int	bits;

	bits = 0;
	while ((1 << bits) <= max)
		bits++;
	return (bits);
}
