/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:43:09 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 12:32:29 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_null(t_node *start);
t_node	*ft_not_null(t_stack *stack_a, t_node *start);

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

t_node	*ft_high_index(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*high_index;

	high_index = start;
	if (finish != NULL)
		high_index = ft_not_null(stack_a, start);
	else if (finish == NULL)
		high_index = ft_null(start);
	return (high_index);
}

t_node	*ft_null(t_node *start)
{
	t_node	*high_index;

	high_index = start;
	while (start != NULL)
	{
		if (start->l >= high_index->l)
			high_index = start;
		start = start->next;
	}
	return (high_index);
}

t_node	*ft_not_null(t_stack *stack_a, t_node *start)
{
	t_node	*high_index;
	int		len;

	high_index = start;
	len = ft_stack_len(stack_a);
	while (len > 0)
	{
		if (start->l >= high_index->l)
			high_index = start;
		start = start->next;
		len--;
		if (start == NULL)
			start = stack_a->top;
	}
	return (high_index);
}
