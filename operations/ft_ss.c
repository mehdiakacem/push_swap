/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:35:19 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 14:47:07 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa_ss(t_stack *stack_a);
void	ft_sb_ss(t_stack *stack_b);

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_sa_ss(stack_a);
	ft_sb_ss(stack_b);
	ft_printf("ss\n");
}

void	ft_sa_ss(t_stack *stack_a)
{
	t_node	*temp;

	if (stack_a->top != NULL && stack_a->top->next != NULL)
	{	
		temp = stack_a->top;
		stack_a->top = stack_a->top->next;
		temp->next = stack_a->top->next;
		stack_a->top->next = temp;
	}
}

void	ft_sb_ss(t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->top != NULL && stack_b->top->next != NULL)
	{	
		temp = stack_b->top;
		stack_b->top = stack_b->top->next;
		temp->next = stack_b->top->next;
		stack_b->top->next = temp;
	}
}
