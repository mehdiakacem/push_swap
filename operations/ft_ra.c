/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:34:58 by makacem           #+#    #+#             */
/*   Updated: 2022/10/08 18:09:35 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *stack_a)
{
	t_node	*temp;

	if (stack_a->top != NULL && stack_a->top->next != NULL)
	{
		temp = stack_a->top;
		stack_a->top = stack_a->top->next;
		stack_a->bot->next = temp;
		stack_a->bot = stack_a->bot->next;
		stack_a->bot->next = NULL;
		ft_printf("ra\n");
	}
}
