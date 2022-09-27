/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:23:24 by makacem           #+#    #+#             */
/*   Updated: 2022/09/27 19:41:09 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_big_int(int argc, char **argv)
{
	int			nbr_of_args;
	int			i;
	long int	nbr;

	nbr_of_args = argc - 1;
	i = 1;
	while (i <= nbr_of_args)
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > 2147483647 || nbr < -2147483647 - 1)
			ft_display_error();
		printf("%ld ", nbr);
		i++;
	}
}
