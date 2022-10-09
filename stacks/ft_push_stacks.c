/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:58:45 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 15:46:04 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_stacks(t_node **top, int nbr)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(void *));
	if (new_node == NULL)
		ft_display_error();
	new_node->data = nbr;
	new_node->next = *top;
	*top = new_node;
}
