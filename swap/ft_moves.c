/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:49:39 by makacem           #+#    #+#             */
/*   Updated: 2022/10/21 18:13:09 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_calc_moves(t_node *node, t_node *pair);
t_node	*ft_least_moves_node(t_stack *stack_b);

void	ft_moves(t_stack *stack_b)
{
	t_node	*node;

	node = stack_b->top;
	while (node != NULL)
	{
		node->moves = ft_calc_moves(node, node->pair);
		node = node->next;
	}
}

int		ft_calc_moves(t_node *node, t_node *pair)
{
	int moves;
	int	a;
	int b;

	a = pair->index;
	if (a < 0)
		a = -a;
	b = node->index;
	if (b < 0)
		b = -b;
	moves = a + b;
	return(moves);
}

t_node	*ft_least_moves_node(t_stack *stack_b)
{
	t_node	*node;
	t_node	*least_moves;

	node = stack_b->top;
	least_moves = node;
	while (node != NULL)
	{
		if (node->moves < least_moves->moves)
			least_moves = node;
		node = node->next;
	}
	return (least_moves);
}