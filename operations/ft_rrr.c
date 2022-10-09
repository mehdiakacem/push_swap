/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:13 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 13:45:11 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra_rrr(t_stack *stack_a);
void	ft_rrb_rrr(t_stack *stack_b);

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rra_rrr(stack_a);
	ft_rrb_rrr(stack_b);
	ft_printf("rrr\n");
}

void	ft_rra_rrr(t_stack *stack_a)
{
	t_node	*temp;
	t_node	*new_bot;

	if (stack_a->top != NULL && stack_a->top->next != NULL)
	{
		new_bot = stack_a->top;
		while (new_bot->next != stack_a->bot)
		{
			new_bot = new_bot->next;
		}
		temp = stack_a->top;
		stack_a->top = stack_a->bot;
		stack_a->top->next = temp;
		stack_a->bot = new_bot;
		stack_a->bot->next = NULL;
	}
}

void	ft_rrb_rrr(t_stack *stack_b)
{
	t_node	*temp;
	t_node	*new_bot;

	if (stack_b->top != NULL && stack_b->top->next != NULL)
	{
		new_bot = stack_b->top;
		while (new_bot->next != stack_b->bot)
		{
			new_bot = new_bot->next;
		}
		temp = stack_b->top;
		stack_b->top = stack_b->bot;
		stack_b->top->next = temp;
		stack_b->bot = new_bot;
		stack_b->bot->next = NULL;
	}
}
