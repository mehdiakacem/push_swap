/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:10 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 13:35:39 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_stack *stack_b)
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
		ft_printf("rrb\n");
	}
}
