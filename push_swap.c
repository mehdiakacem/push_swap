/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:49 by makacem           #+#    #+#             */
/*   Updated: 2022/09/26 17:58:48 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	nbrofarg;
	int	index;

	ft_printf("argc: %d\n", argc);
	nbrofarg = argc - 1;
	index = 1;
	while (index <= nbrofarg)
	{
		ft_printf("argv%d:%s\n", index, *(argv + index));
		index++;
	}
	return (0);
}
