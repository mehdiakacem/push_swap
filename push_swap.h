/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:02:46 by makacem           #+#    #+#             */
/*   Updated: 2022/10/19 12:49:54 by makacem          ###   ########.fr       */
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
	int			l;
	int			is_lis;
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
void	ft_push_stacks(t_node **top, int nbr);
void	ft_build_stacks(int argc, char **argv, t_stack *a, t_stack *b);
void	ft_free_stacks(t_stack *stack_a);
void	ft_print_stacks(t_stack *stack_a, t_stack *stack_b);
void	ft_pa(t_stack *stack_a, t_stack *stack_b);
void	ft_pb(t_stack *stack_a, t_stack *stack_b);
void	ft_ra(t_stack *stack_a);
void	ft_rb(t_stack *stack_b);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);
void	ft_rra(t_stack *stack_a);
void	ft_rrb(t_stack *stack_b);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b);
void	ft_sa(t_stack *stack_a);
void	ft_sb(t_stack *stack_b);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_solve(t_stack *stack_a);
void	ft_push(t_stack *stack_a, t_stack *stack_b);
void	ft_lis(t_stack *stack_a);
void	ft_islis(t_stack *stack_a, t_node *start, t_node *finish);
int		ft_stack_len(t_stack *stack_a);
void	ft_print_lis(t_stack *stack_a, t_node *start, t_node *finish);
void	ft_find_lis(t_stack *stack_a, t_node *start, t_node *finish);
void	ft_index_lis(t_stack *stack_a, t_node *lis, t_node *finish);
t_node	*ft_high_index(t_stack *stack_a, t_node *start, t_node *finish);

#endif