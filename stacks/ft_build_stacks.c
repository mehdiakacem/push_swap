/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:55:30 by makacem           #+#    #+#             */
/*   Updated: 2022/10/09 15:18:09 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_build_stacks(int argc, char **argv, t_stack *a, t_stack *b)
{
	int	nbr_of_args;
	int	i;
	int	nbr;

	nbr_of_args = argc - 1;
	i = 1;
	a->top = NULL;
	nbr = ft_atoi(argv[i]);
	ft_push(&(a->top), nbr);
	i++;
	a->bot = a->top;
	while (i <= nbr_of_args)
	{
		nbr = ft_atoi(argv[i]);
		ft_push(&(a->bot->next), nbr);
		a->bot = a->bot->next;
		i++;
	}
	b->top = NULL;
	b->bot = b->top;
}
