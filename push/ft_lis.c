/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:31 by makacem           #+#    #+#             */
/*   Updated: 2022/10/13 19:32:05 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_start_lis(t_stack *stack_a);
t_node	*ft_finish_lis(t_stack *stack_a, int start);
void	ft_find_lis(t_stack *stack_a, t_node *start, t_node *finish);
void	ft_index_lis(t_stack *stack_a, t_node *lis, t_node *finish);

void	ft_lis(t_stack *stack_a)
{
	t_node	*start;
	t_node	*finish;

	start = ft_start_lis(stack_a);
	finish = ft_finish_lis(stack_a, start->data);

	ft_find_lis(stack_a, start, finish);
	ft_islis(stack_a, start, finish);
	
}

void	ft_index_lis(t_stack *stack_a, t_node *lis, t_node *finish)
{
	t_node *sub;

	sub = lis->next;
	if (sub == NULL)
		sub = stack_a->top;
	if (finish != NULL)
	{
		while (sub->data != finish->data)
		{
			if (lis->data < sub->data)
				sub->l = sub->l + 1;
			sub = sub->next;
			if (sub == NULL)
				sub = stack_a->top;
		}
	}
	else if (finish == NULL)
	{
		while (sub != NULL)
		{
			if (lis->data < sub->data)
				sub->l = sub->l + 1;
			sub = sub->next;
		}
	}
}

void	ft_find_lis(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node *lis;

	lis = start;
	if (finish != NULL)
	{
		while (lis->data != finish->data)
		{
			ft_index_lis(stack_a, lis, finish);
			lis = lis->next;
			if (lis == NULL)
				lis = stack_a->top;
		}
	}
	else if (finish == NULL)
	{
		while (lis != NULL)
		{
			ft_index_lis(stack_a, lis, finish);
			lis = lis->next;
		}
	}
}

t_node	*ft_start_lis(t_stack *stack_a)
{
	t_node	*smallest_node;
	t_node	*temp;

	temp = stack_a->top;
	smallest_node = temp;
	while (temp != NULL)
	{
		if (temp->data < smallest_node->data)
			smallest_node = temp;
		temp = temp->next;
	}
	return (smallest_node);
}

t_node	*ft_finish_lis(t_stack *stack_a, int start)
{
	t_node	*smallest_prev;
	t_node	*temp;

	temp = stack_a->top;
	smallest_prev = temp;
	if (stack_a->top->data == start)
		return (NULL);
	while (temp->next->data != start)
	{
		temp = temp->next;
		smallest_prev = temp;
	}
	return (smallest_prev);
}
