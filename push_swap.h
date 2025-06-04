/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:50:19 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/04 20:04:07 by szmadeja         ###   ########.fr       */
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
	int	stack_a;
	int	size_a;
	int	stack_b;
	int	size_b;
}		t_stack;

int	p_error(void);
char	**copy_args(int argc, char **argv);
void	freearr(char **s);

#endif
