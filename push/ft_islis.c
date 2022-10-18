/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:19:36 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 00:45:43 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_high_index(t_stack *stack_a, t_node *start, t_node *finish);

void	ft_islis(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*high_index;
	t_node	*loop;
	t_node	*temp;

	loop = start;
	temp = start;
	high_index = ft_high_index(stack_a, start, finish);
	high_index->is_lis = 1;
	if (finish != NULL)
	{
		while (loop->is_lis != 1)
		{
			while (loop->is_lis != 1 && loop->l <= high_index->l)
			{
				if (loop->l >= temp->l && loop->data < high_index->data)
					temp = loop;
				loop = loop->next;
				if (loop == NULL)
					loop = stack_a->top;
			}
			high_index = temp;
			high_index->is_lis = 1;
			loop = start;
			temp = start;
		}
	}
	else if (finish == NULL)
	{
		while (loop->is_lis != 1)
		{
			while (loop != NULL && loop->l <= high_index->l)
			{
				if (loop->l >= temp->l && loop->data < high_index->data)
				{
					temp = loop;
				}
				loop = loop->next;
				if (loop->data == high_index->data)
					loop = NULL;
			}
			high_index = temp;
			high_index->is_lis = 1;
			loop = start;
			temp = start;
		}
	}
}

t_node	*ft_high_index(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*high_index;
	int		len;

	high_index = start;
	len = ft_stack_len(stack_a);
	if (finish != NULL)
	{
		while (len > 0)
		{
			if (start->l >= high_index->l)
				high_index = start;
			start = start->next;
			len--;
			if (start == NULL)
				start = stack_a->top;
		}
	}
	else if (finish == NULL)
	{
		while (start != NULL)
		{
			if (start->l >= high_index->l)
				high_index = start;
			start = start->next;
		}
	}
	return (high_index);
}
