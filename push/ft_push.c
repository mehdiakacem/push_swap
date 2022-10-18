/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:52:21 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 00:40:35 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_l(t_stack *stack_a);

void	ft_push(t_stack *stack_a)
{
	ft_l(stack_a);
	ft_lis(stack_a);
}

void	ft_l(t_stack *stack_a)
{
	t_node	*temp;

	temp = stack_a->top;
	while (temp != NULL)
	{
		temp->l = 1;
		temp->is_lis = 0;
		temp = temp->next;
	}
}
