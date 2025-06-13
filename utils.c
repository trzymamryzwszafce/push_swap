/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szmadeja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:01:56 by szmadeja          #+#    #+#             */
/*   Updated: 2025/06/10 18:24:47 by szmadeja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freearr(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	p_error(void)
{
	ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
	return (EXIT_FAILURE);
}

int	valid(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (!ft_isdigit(arr[i][j]) && arr[i][j] != '-')
				return (0);
			j++;
		}
		j = i + 1;
		while (arr[j])
		{
			if (!ft_strcmp(arr[i], arr[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	stack_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	**copy_args(int argc, char **argv)
{
	char	**arr;
	int		i;

	arr = malloc(sizeof(char *) * (argc));
	if (!arr)
		p_error();
	i = 1;
	while (i < argc)
	{
		arr[i - 1] = malloc(ft_strlen(argv[i]) + 1);
		if (!arr[i - 1])
			p_error();
		ft_strcpy(arr[i - 1], argv[i]);
		i++;
	}
	arr[i - 1] = NULL;
	return (arr);
}
