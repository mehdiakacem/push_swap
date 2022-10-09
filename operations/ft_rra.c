/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:07 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 13:27:02 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack *stack_a)
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
		ft_printf("rra\n");
	}
}
