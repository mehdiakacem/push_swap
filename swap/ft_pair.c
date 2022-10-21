/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:40:12 by makacem           #+#    #+#             */
/*   Updated: 2022/10/21 17:54:23 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_find_pair(t_stack *stack_a, t_node *node_b);

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

t_node	*ft_find_pair(t_stack *stack_a, t_node *node_b)
{
	t_node	*node_a;
	t_node	*pair;

	node_a = stack_a->top;
	pair = NULL;
	if (node_a->data > node_b->data)
		pair = node_a;
	while (node_a != NULL)
	{
		if (node_a->next != NULL)
		{
			if (node_a->data < node_b->data && node_a->next->data > node_b->data)
				pair = node_a->next;
		}
		node_a = node_a->next;
	}
	if (pair == NULL)
		pair = ft_smallest_nbr(stack_a);
	return (pair);
}
