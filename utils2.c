/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:11:56 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 19:24:07 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_fill(char **arr, int size)
{
	int	i;
	int	*stack;

	i = 0;
	stack = malloc(sizeof(int) * size);
	if (!stack)
		p_error();
	while (arr[i])
	{
		stack[i] = ft_atoi(arr[i]);
		i++;
	}
	return (stack);
}

int	find_biggest(int *stack, int size)
{
	int	i;
	int	max;

	i = 0;
	max = stack[0];
	while (i < size)
	{
		if (stack[i] > max)
			max = stack[i];
		i++;
	}
	return (max);
}

int	find_lowest(int *stack, int size)
{
	int	i;
	int	min;

	i = 0;
	min = stack[0];
	while (i < size)
	{
		if (stack[i] < min)
			min = stack[i];
		i++;
	}
	return (min);
}

int	issorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] > stack->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	find_position(int *stack, int size, int value)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (stack[i] == value)
			return i;
		i++;
	}
	return (-1);
}

void	free_stack(t_stack *stack)
{
	free(stack->stack_a);
	if (stack->stack_b)
		free(stack->stack_b);
}
