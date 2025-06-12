/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:08:22 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 19:27:18 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	int	biggest;

	if (stack->size_a == 1)
		return ;
	biggest = find_biggest(stack->stack_a, stack->size_a);
	if (biggest == stack->stack_a[0] && stack->size_a == 3)
		ra(stack, true);
	else if (biggest == stack->stack_a[1] && stack->size_a == 3)
		rra(stack, true);
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack, true);
}

void	radix(t_stack *stack)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;
	int	size;

	max_num = stack->size_a - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		size = stack->size_a;
		while (++j < size)
		{
			if (((stack->stack_a[0] >> i) & 1) == 1)
				ra(stack, true);
			else
				pb(stack);
		}
		while (stack->size_b > 0)
			pa(stack);
	}
}

void	push_swap(t_stack *stack)
{
	stack->stack_b = malloc(sizeof(int *) * stack->size_a);
	radix(stack);
}
