/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:49 by makacem           #+#    #+#             */
/*   Updated: 2022/10/21 18:45:01 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc <= 2)
		exit(0);
	ft_check_errors(argc, argv);
	ft_build_stacks(argc, argv, &stack_a, &stack_b);
	if (argc <= 4)
		ft_solve(&stack_a);
	else if (argc >= 5)
	{
		ft_push(&stack_a, &stack_b);
		ft_swap(&stack_a, &stack_b);
		ft_sort(&stack_a);
	}
	//ft_print_stacks(&stack_a, &stack_b);
	ft_free_stacks(&stack_a);
	return (0);
}
