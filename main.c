/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:49:56 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 19:26:19 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	char	**arr;

	stack = malloc(sizeof(*stack));
	if (argc == 1)
		return (p_error());
	else if (argc == 2)
		arr = ft_split(argv[1], ' ');
	else
		arr = copy_args(argc, argv);
	if (!valid(arr))
		return (p_error());
	stack->size_a = stack_size(arr);
	stack->stack_a = stack_fill(arr, stack->size_a);
	freearr(arr);
	if (!issorted(stack))
	{
		if (stack->size_a <= 3)
			sort_three(stack);
		else
			push_swap(stack);
	}
	if (issorted(stack))
		ft_printf("ok");
	else
		ft_printf("nieok");
	free_stack(stack);
	return (0);
}
