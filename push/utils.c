/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:43:09 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 00:44:46 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_lis(t_stack *stack_a, t_node *start, t_node *finish)
{
	int		len;

	len = ft_stack_len(stack_a);
	if (finish != NULL)
	{
		while (len > 0)
		{
			if (start->is_lis == 1)
				printf("%d ", start->data);
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
			if (start->is_lis == 1)
				printf("%d ", start->data);
			start = start->next;
		}
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
