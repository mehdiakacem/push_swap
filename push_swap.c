/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:49 by makacem           #+#    #+#             */
/*   Updated: 2022/10/05 19:09:50 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack	stack_b;

	if (argc == 1)
		exit(0);
	ft_check_errors(argc, argv);
	ft_print_stacks(&stack_a, &stack_b);
	ft_build_stack_a(argc, argv, &stack_a);
	ft_build_stack_b(&stack_b);
	ft_print_stacks(&stack_a, &stack_b);
	return (0);
}
