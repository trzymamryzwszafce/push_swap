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
