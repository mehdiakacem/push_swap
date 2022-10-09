/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:05 by makacem           #+#    #+#             */
/*   Updated: 2022/10/08 21:44:44 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra_rr(t_stack *stack_a);
void	ft_rb_rr(t_stack *stack_b);

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_ra_rr(stack_a);
	ft_rb_rr(stack_b);
	ft_printf("rr\n");
}

void	ft_ra_rr(t_stack *stack_a)
{
	t_node	*temp;

	if (stack_a->top != NULL && stack_a->top->next != NULL)
	{
		temp = stack_a->top;
		stack_a->top = stack_a->top->next;
		stack_a->bot->next = temp;
		stack_a->bot = stack_a->bot->next;
		stack_a->bot->next = NULL;
	}
}

void	ft_rb_rr(t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->top != NULL && stack_b->top->next != NULL)
	{
		temp = stack_b->top;
		stack_b->top = stack_b->top->next;
		stack_b->bot->next = temp;
		stack_b->bot = stack_b->bot->next;
		stack_b->bot->next = NULL;
	}
}
