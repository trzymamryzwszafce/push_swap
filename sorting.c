#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	int	biggest;

	biggest = find_biggest(stack->stack_a, stack->size_a);
	if (biggest == stack->stack_a[0])
		ra(stack, true);
	else if (biggest == stack->stack_a[1])
		rra(stack, true);
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack, true);
}
