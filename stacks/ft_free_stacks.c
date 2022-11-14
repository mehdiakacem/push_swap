/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:48:42 by makacem           #+#    #+#             */
/*   Updated: 2022/11/14 17:14:42 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stacks(t_stack *stack_a)
{
	t_node	*temp;

	while (stack_a->top != NULL)
	{
		temp = stack_a->top;
		stack_a->top = stack_a->top->next;
		free(temp);
	}
}

void	ft_free_argv(char **argv)
{
	char	**tmp_argv;

	tmp_argv = argv;
	while (*argv != NULL)
	{
		free(*argv);
		argv++;
	}
	free(tmp_argv);
}
