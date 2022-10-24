/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:49 by makacem           #+#    #+#             */
/*   Updated: 2022/10/24 02:05:21 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	ft_check_errors(argc, argv);
	if (argc <= 2)
		exit(0);
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
