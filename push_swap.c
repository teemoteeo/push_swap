/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timoteo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:19:35 by timoteo           #+#    #+#             */
/*   Updated: 2026/01/28 15:07:43 by tcostant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;

	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}

t_stack	*parse_input(int argc, char **argv, t_stack *stack)
{
	int		i;
	long	num;
	t_node	*new_node;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		new_node = malloc(sizeof(t_node));
		if (!new_node)
		{
			free_stack(stack);
			return (NULL);
		}
		new_node->value = (int)num;
		new_node->next = stack->top;
		stack->top = new_node;
		stack->size++;
		i++;
	}
	return (stack);
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (stack->size < 2)
		return (1);
	current = stack->top;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = init_stack();
	b = init_stack();
	parse_input(argc, argv, a);
	if (is_sorted(a))
	{
		free_stack(a);
		free_stack(b);
		return (0);
	}
	turk_sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
