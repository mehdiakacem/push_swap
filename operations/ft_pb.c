/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:34:55 by makacem           #+#    #+#             */
/*   Updated: 2022/10/08 21:38:33 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;

	if (stack_a->top != NULL)
	{
		if (stack_b->top == NULL)
		{
			stack_b->top = stack_a->top;
			stack_a->top = stack_a->top->next;
			stack_b->bot = stack_b->top;
			stack_b->bot->next = NULL;
		}
		else
		{
			temp = stack_b->top;
			stack_b->top = stack_a->top;
			stack_a->top = stack_a->top->next;
			stack_b->top->next = temp;
		}
		ft_printf("pb\n");
	}
}
