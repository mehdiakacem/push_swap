/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:35:10 by makacem           #+#    #+#             */
/*   Updated: 2022/09/27 19:55:01 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_errors(int argc, char **argv)
{
	ft_argv_not_int(argc, argv);
	ft_big_int(argc, argv);
}
