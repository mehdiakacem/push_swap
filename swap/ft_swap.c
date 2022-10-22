/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:03:39 by makacem           #+#    #+#             */
/*   Updated: 2022/10/22 13:02:38 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_make_moves(t_stack *stack_a, t_stack *stack_b, t_node *node_b);
void	ft_smart_rotate(int ra, int rb, t_stack *stack_a, t_stack *stack_b);
void	ft_rotate(int ra, int rb, t_stack *stack_a, t_stack *stack_b);

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
	int	ra;
	int	rb;

	ra = node_b->pair->index;
	rb = node_b->index;
	if ((ra >= 0 && rb >= 0) || (ra <= 0 && rb <= 0))
		ft_smart_rotate(ra, rb, stack_a, stack_b);
	else if ((ra >= 0 && rb <= 0) || (ra <= 0 && rb >= 0))
		ft_rotate(ra, rb, stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_smart_rotate(int ra, int rb, t_stack *stack_a, t_stack *stack_b)
{
	while (ra > 0 && rb > 0)
	{
		ft_rr(stack_a, stack_b);
		ra--;
		rb--;
	}
	while (ra < 0 && rb < 0)
	{
		ft_rrr(stack_a, stack_b);
		ra++;
		rb++;
	}
	ft_rotate(ra, rb, stack_a, stack_b);
}

void	ft_rotate(int ra, int rb, t_stack *stack_a, t_stack *stack_b)
{
	while (ra > 0)
	{
		ft_ra(stack_a);
		ra--;
	}
	while (ra < 0)
	{
		ft_rra(stack_a);
		ra++;
	}
	while (rb > 0)
	{
		ft_rb(stack_b);
		rb--;
	}
	while (rb < 0)
	{
		ft_rrb(stack_b);
		rb++;
	}
}
