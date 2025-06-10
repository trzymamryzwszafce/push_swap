/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:08:22 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 19:16:51 by szmadeja         ###   ########.fr       */
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
}

void	radix_sort(t_stack *a, t_stack *b)// dodatkowa funkcjA do sortowania zamiast sort_big
{
	int	max_num = a->size - 1;
	int	max_bits = 0;
	int	i;
	int	j;
	int	size;

	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		size = a->size;
		while (++j < size)
		{
			if (((a->top->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->size > 0)
			pa(a, b);
	}
}
