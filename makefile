# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makacem <makacem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 13:01:53 by makacem           #+#    #+#              #
#    Updated: 2022/10/09 14:44:34 by makacem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

SRC = push_swap.c \
	errors/ft_argv_not_int.c \
	errors/ft_check_errors.c \
	errors/ft_display_error.c \
	errors/ft_big_int.c \
	errors/ft_dup.c \
	stacks/ft_push.c \
	stacks/ft_build_stacks.c \
	stacks/ft_print_stacks.c \
	stacks/ft_free_stacks.c \
	operations/ft_pa.c \
	operations/ft_pb.c \
	operations/ft_ra.c \
	operations/ft_rb.c \
	operations/ft_rr.c \
	operations/ft_rra.c \
	operations/ft_rrb.c \
	operations/ft_rrr.c \
	operations/ft_sa.c \
	operations/ft_sb.c \
	operations/ft_ss.c \

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	@make -C ./libft
	@$(CC) $(OBJ) -o $(NAME) libft/libft.a

%.o : %.c $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)
	@make clean -C ./libft

fclean : clean
	@rm -f $(NAME)
	@make fclean -C ./libft

re : fclean all