/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:35:45 by makacem           #+#    #+#             */
/*   Updated: 2022/09/28 18:02:23 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_dup(int argc, char **argv)
{
	int	nbr_of_args;
	int	nbr;
	int	i;
	int	j;

	nbr_of_args = argc - 1;
	i = 1;
	while (i <= nbr_of_args)
	{
		nbr = ft_atoi(argv[i]);
		j = i + 1;
		while (j <= nbr_of_args)
		{
			if (nbr == ft_atoi(argv[j]))
				ft_display_error();
			j++;
		}
		i++;
	}
}
