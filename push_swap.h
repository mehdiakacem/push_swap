/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:46 by makacem           #+#    #+#             */
/*   Updated: 2022/10/05 14:50:19 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct node
{
	int			data;
	struct node	*next;
}	t_node;

typedef struct stack
{
	t_node	*top;
	t_node	*bot;
}	t_stack;

void	ft_check_errors(int argc, char **argv);
void	ft_argv_not_int(int argc, char **argv);
void	ft_display_error(void);
void	ft_big_int(int argc, char **argv);
void	ft_dup(int argc, char **argv);
void	ft_push(t_node **top, int nbr);
void	ft_build_stack_a(int argc, char **argv, t_stack *stack_a);
void	ft_build_stack_b(t_stack *stack_b);
void	ft_print_stacks(t_stack *stack_a, t_stack *stack_b);

#endif