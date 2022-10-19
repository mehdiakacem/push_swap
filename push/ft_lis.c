/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:21:31 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 12:55:19 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_start_lis(t_stack *stack_a);
t_node	*ft_finish_lis(t_stack *stack_a, int start);

void	ft_lis(t_stack *stack_a)
{
	t_node	*start;
	t_node	*finish;

	start = ft_start_lis(stack_a);
	finish = ft_finish_lis(stack_a, start->data);
	ft_find_lis(stack_a, start, finish);
	ft_islis(stack_a, start, finish);
}

int	ft_stack_len(t_stack *stack_a)
{
	int		count;
	t_node	*node;

	count = 0;
	node = stack_a->top;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}

void	ft_index_lis(t_stack *stack_a, t_node *lis, t_node *finish)
{
	t_node	*sub;

	sub = lis->next;
	if (sub == NULL)
		sub = stack_a->top;
	if (finish != NULL)
	{
		while (sub->data != finish->next->data)
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
