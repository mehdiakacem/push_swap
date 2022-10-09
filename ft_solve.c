/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:47:54 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 16:28:01 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_solve(t_stack *stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = stack_a->top->data;
	mid = stack_a->top->next->data;
	bot = stack_a->bot->data;
	if (top > mid && mid < bot && top < bot)
		ft_sa(stack_a);
	else if (top > mid && mid > bot && top > bot)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (top > mid && mid < bot && top > bot)
		ft_ra(stack_a);
	else if (top < mid && mid > bot && top < bot)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (top < mid && mid > bot && top > bot)
		ft_rra(stack_a);
}
