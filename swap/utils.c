/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:37:32 by makacem           #+#    #+#             */
/*   Updated: 2022/10/21 15:40:50 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



t_node	*ft_smallest_nbr(t_stack *stack_a)
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