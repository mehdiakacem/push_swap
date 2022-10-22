/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:40:12 by makacem           #+#    #+#             */
/*   Updated: 2022/10/22 13:04:14 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_find_pair(t_stack *stack_a, t_node *b);

void	ft_pair(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	node = stack_b->top;
	while (node != NULL)
	{
		node->pair = ft_find_pair(stack_a, node);
		node = node->next;
	}
}

t_node	*ft_find_pair(t_stack *stack_a, t_node *b)
{
	t_node	*a;
	t_node	*pair;

	a = stack_a->top;
	pair = NULL;
	if (a->data > b->data)
		pair = a;
	while (a != NULL)
	{
		if (a->next != NULL)
		{
			if (a->data < b->data && a->next->data > b->data)
				pair = a->next;
		}
		a = a->next;
	}
	if (pair == NULL)
		pair = ft_smallest_nbr(stack_a);
	return (pair);
}
