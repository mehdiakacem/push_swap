/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:03:39 by makacem           #+#    #+#             */
/*   Updated: 2022/10/21 18:24:18 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_make_moves(t_stack *stack_a, t_stack *stack_b, t_node *node_b);

void	ft_swap(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node_b;

	while (stack_b->top != NULL)
	{
		ft_index(stack_a);
		ft_index(stack_b);
		ft_pair(stack_a, stack_b);
		ft_moves(stack_b);
		node_b = ft_least_moves_node(stack_b);
		ft_make_moves(stack_a, stack_b, node_b);
	}
}

void	ft_make_moves(t_stack *stack_a, t_stack *stack_b, t_node *node_b)
{
	int ra;
	int rb;

	ra = node_b->pair->index;
	rb = node_b->index;
	if (ra > 0)
	{
		while (ra > 0)
		{
			ft_ra(stack_a);
			ra--;
		}
	}
	else if (ra < 0)
	{
		while (ra < 0)
		{
			ft_rra(stack_a);
			ra++;
		}
	}
	if (rb > 0)
	{
		while (rb > 0)
		{
			ft_rb(stack_b);
			rb--;
		}
	}
	else if (rb < 0)
	{
		while (rb < 0)
		{
			ft_rrb(stack_b);
			rb++;
		}
	}
	ft_pa(stack_a, stack_b);
}
