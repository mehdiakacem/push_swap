/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:19:36 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 12:23:41 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_finish_is_not_null(t_stack *stack_a, t_node *start, t_node *finish);
void	ft_finish_is_null(t_stack *stack_a, t_node *start, t_node *finish);

void	ft_islis(t_stack *stack_a, t_node *start, t_node *finish)
{
	if (finish != NULL)
		ft_finish_is_not_null(stack_a, start, finish);
	else if (finish == NULL)
		ft_finish_is_null(stack_a, start, finish);
}

void	ft_finish_is_not_null(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*high_index;
	t_node	*loop;
	t_node	*temp;

	loop = start;
	temp = start;
	high_index = ft_high_index(stack_a, start, finish);
	high_index->is_lis = 1;
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

void	ft_finish_is_null(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*high_index;
	t_node	*loop;
	t_node	*temp;

	loop = start;
	temp = start;
	high_index = ft_high_index(stack_a, start, finish);
	high_index->is_lis = 1;
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

void	ft_find_lis(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*lis;
	int		len;

	lis = start;
	len = ft_stack_len(stack_a);
	if (finish != NULL)
	{
		while (len > 0)
		{
			ft_index_lis(stack_a, lis, finish);
			lis = lis->next;
			len--;
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
