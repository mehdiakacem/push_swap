/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:55:05 by makacem           #+#    #+#             */
/*   Updated: 2022/10/20 16:55:33 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index(t_stack *stack)
{
	t_node	*node;
	int		len;
	int		index;

	node = stack->top;
	len = ft_stack_len(stack);
	index = 0;
	while (index <= len / 2)
	{
		node->index = index;
		index++;
		node = node->next;
	}
	if (len % 2 == 0)
		index--;
	while (index > -1 && node != NULL)
	{
		index--;
		node->index = index * (-1);
		node = node->next;
	}
}
