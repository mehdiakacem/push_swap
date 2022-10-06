/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stack_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:55:30 by makacem           #+#    #+#             */
/*   Updated: 2022/10/05 14:30:35 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_build_stack_a(int argc, char **argv, t_stack *stack_a)
{
	int	nbr_of_args;
	int	i;
	int nbr;

	nbr_of_args = argc - 1;
	i = 1;
	stack_a->top = NULL;
	nbr = ft_atoi(argv[i]);
	ft_push(&(stack_a->top), nbr);
	i++;
	stack_a->bot = stack_a->top;
	while (i <= nbr_of_args)
	{
		nbr = ft_atoi(argv[i]);
		ft_push(&(stack_a->bot->next), nbr);
		stack_a->bot = stack_a->bot->next;
		i++;
	}
	
}