/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:40:31 by makacem           #+#    #+#             */
/*   Updated: 2022/10/22 12:40:50 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *stack_a)
{
	t_node	*smallet_nbr;
	int		ra;

	ft_index(stack_a);
	smallet_nbr = ft_smallest_nbr(stack_a);
	ra = smallet_nbr->index;
	if (ra > 0)
	{
		while (ra > 0)
		{
			ft_ra(stack_a);
			ra--;
		}
	}
	else if (ra < 0)
	{
		while (ra < 0)
		{
			ft_rra(stack_a);
			ra++;
		}
	}
}
