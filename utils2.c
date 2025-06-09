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
