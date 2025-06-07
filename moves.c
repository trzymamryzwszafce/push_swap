#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	temp = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = temp;
	if (check)
		ft_printf("sa\n");
}

void	sb(t_stack *stack, bool check)
{
	int	temp;

	temp = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_a[1];
	stack->stack_b[1] = temp;
	if (check)
		ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack, false);
	sb(stack, false);
	ft_printf("ss\n");
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b == 0)
		return ;
	i = stack->size_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	stack->size_a++;
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->size_b--;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->size_a == 0)
		return ;
	i = stack->size_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	stack->size_b++;
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->size_a--;
	ft_printf("pb\n");
}
