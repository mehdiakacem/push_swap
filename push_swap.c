/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:49 by makacem           #+#    #+#             */
/*   Updated: 2022/11/14 17:06:52 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_new_swap(int argc, char **argv);

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc == 2)
	{
		ft_new_swap(argc, argv);
		return (0);
	}
	ft_check_errors(argc, argv);
	ft_build_stacks(argc, argv, &stack_a, &stack_b);
	if (argc <= 4)
		ft_solve(&stack_a);
	else if (argc >= 5)
	{
		if (ft_checksort(&stack_a) == 0)
		{
			ft_free_stacks(&stack_a);
			return (0);
		}
		ft_push(&stack_a, &stack_b);
		ft_swap(&stack_a, &stack_b);
		ft_sort(&stack_a);
	}
	ft_free_stacks(&stack_a);
	return (0);
}

int	ft_new_swap(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	argv = ft_split_arg(argv);
	argc = ft_count_argc(argc, argv);
	ft_check_errors(argc, argv);
	ft_build_stacks(argc, argv, &stack_a, &stack_b);
	if (argc <= 4)
		ft_solve(&stack_a);
	else if (argc >= 5)
	{
		if (ft_checksort(&stack_a) == 0)
		{
			ft_free_stacks(&stack_a);
			return (0);
		}
		ft_push(&stack_a, &stack_b);
		ft_swap(&stack_a, &stack_b);
		ft_sort(&stack_a);
	}
	ft_free_stacks(&stack_a);
	ft_free_argv(argv);
	return (0);
}

int	ft_count_argc(int argc, char **argv)
{
	argc = 0;
	while (*argv != NULL)
	{
		argc++;
		argv++;
	}
	return (argc);
}

char	**ft_split_arg(char **argv)
{
	char	**list;
	char	*first_arg;
	char	*new_arg;

	first_arg = ft_strjoin(argv[0], " ");
	new_arg = ft_strjoin(first_arg, argv[1]);
	list = ft_split(new_arg, ' ');
	free(first_arg);
	free(new_arg);
	return (list);
}

int	ft_checksort(t_stack *stack_a)
{
	t_node	*node;

	node = stack_a->top;
	while (node != NULL && node->next != NULL)
	{
		if (node->data > node->next->data)
			return (1);
		node = node->next;
	}
	return (0);
}
