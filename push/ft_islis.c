/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:19:36 by makacem           #+#    #+#             */
/*   Updated: 2022/10/14 12:58:55 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_serch_index(t_stack *stack_a, t_node **temp, t_node *finish);

void	ft_islis(t_stack *stack_a, t_node *start, t_node *finish)
{
	t_node	*temp;

	start->is_lis = 1;
	temp = start->next;
	if (finish != NULL)
	{
		while (temp->data != finish->data)
		{
			temp = temp->next;
			if (temp == NULL)
				temp = stack_a->top;
		}
	}
	else if (finish == NULL)
	{
		while (temp != NULL)
		{
			ft_serch_index(stack_a, &temp, finish);
			printf("1 ");
			temp = temp->next;
		}
	}
}

void	ft_serch_index(t_stack *stack_a, t_node **temp, t_node *finish)
{
	t_node *old;
	t_node *tmp;
	
	if (temp == NULL)
		*temp = stack_a->top;
	old = *temp;
	tmp = *temp;
	old->is_lis = 1;
	tmp = tmp->next;
	if (finish != NULL)
	{
		while (tmp->data != finish->data)
		{
			if (tmp->l == old->l && tmp->data < old->data)
			{
				old->is_lis = 0;
				old = tmp;
				old->is_lis = 1;
			}
			tmp = tmp->next;
			*temp = tmp;
			if (tmp == NULL)
				tmp = stack_a->top;
		}
	}
	else if (finish == NULL)
	{
		while (tmp != NULL)
		{
			if (tmp->l == old->l && tmp->data < old->data)
			{
				old->is_lis = 0;
				old = tmp;
				old->is_lis = 1;
			}
			tmp = tmp->next;
		}
	}
	
}