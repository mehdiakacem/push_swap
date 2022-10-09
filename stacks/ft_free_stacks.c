/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:48:42 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 15:18:35 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_stacks(t_stack *stack_a)
{
	t_node	*temp;

	while (stack_a->top != NULL)
	{
		temp = stack_a->top;
		stack_a->top = stack_a->top->next;
		free(temp);
	}
}
