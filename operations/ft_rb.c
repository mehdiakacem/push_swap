/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:02 by makacem           #+#    #+#             */
/*   Updated: 2022/10/08 21:38:21 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->top != NULL && stack_b->top->next != NULL)
	{
		temp = stack_b->top;
		stack_b->top = stack_b->top->next;
		stack_b->bot->next = temp;
		stack_b->bot = stack_b->bot->next;
		stack_b->bot->next = NULL;
		ft_printf("rb\n");
	}
}
