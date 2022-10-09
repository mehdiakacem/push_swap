/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:34:51 by makacem           #+#    #+#             */
/*   Updated: 2022/10/08 21:38:27 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->top != NULL)
	{
		if (stack_a->top == NULL)
		{
			stack_a->top = stack_b->top;
			stack_b->top = stack_b->top->next;
			stack_a->top->next = NULL;
		}
		else
		{
			temp = stack_a->top;
			stack_a->top = stack_b->top;
			stack_b->top = stack_b->top->next;
			stack_a->top->next = temp;
		}
		ft_printf("pa\n");
	}
}
