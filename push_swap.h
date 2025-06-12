/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:50:19 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 19:25:43 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "libft.h"

# define ERROR_MESSAGE \
	"Error\n"

typedef struct s_stack
{
	int	*stack_a;
	int	size_a;
	int	*stack_b;
	int	size_b;
	int	max;
}		t_stack;

int		p_error(void);
char	**copy_args(int argc, char **argv);
void	freearr(char **s);
int		valid(char **arr);
int		stack_size(char **arr);
int		*stack_fill(char **arr, int size);
int		find_biggest(int *stack, int size);
int		find_lowest(int *stack, int size);
int		issorted(t_stack *stack);
int		find_position(int *stack, int size, int value);
void	sa(t_stack *stack, bool check);
void	sb(t_stack *stack, bool check);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack, bool check);
void	rb(t_stack *stack, bool check);
void	rr(t_stack *stack);
void	rra(t_stack *stack, bool check);
void	rrb(t_stack *stack, bool check);
void	rrr(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_4_5(t_stack *stack);
void	push_swap(t_stack *stack);
void	radix(t_stack *stack);
void	free_stack(t_stack *stack);

#endif
