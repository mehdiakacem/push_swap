/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:17 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 14:44:12 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->top != NULL && stack_b->top->next != NULL)
	{	
		temp = stack_b->top;
		stack_b->top = stack_b->top->next;
		temp->next = stack_b->top->next;
		stack_b->top->next = temp;
		ft_printf("sb\n");
	}
}
