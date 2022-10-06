/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:18:44 by makacem           #+#    #+#             */
/*   Updated: 2022/10/05 15:10:45 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp_a;
	t_node	*temp_b;
	temp_a = stack_a->top;
	temp_b = stack_b->top;
	printf("a -> ");
	while (temp_a != NULL )
	{
		printf("%d -> ", temp_a->data);
		temp_a = temp_a->next;
	}
	printf("NULL\n");
	printf("b -> ");
	while (temp_b != NULL )
	{
		printf("%d ", temp_b->data);
		temp_b = temp_b->next;
	}
	printf("NULL\n");
}