/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_not_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:42:49 by makacem           #+#    #+#             */
/*   Updated: 2022/09/27 19:59:33 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_isdigit(char *argv)
{
	while (*argv != '\0')
	{
		if (*argv == '-' && ft_isdigit(*(argv + 1)) == 0)
			ft_display_error();
		if (ft_isdigit(*argv) == 0)
			ft_display_error();
		argv++;
	}
}

void	ft_argv_not_int(int argc, char **argv)
{
	int	nbr_of_args;
	int	i;

	nbr_of_args = argc - 1;
	i = 1;
	while (i <= nbr_of_args)
	{
		ft_check_isdigit(argv[i]);
		i++;
	}
}
