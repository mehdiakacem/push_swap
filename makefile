# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makacem <makacem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 13:01:53 by makacem           #+#    #+#              #
#    Updated: 2022/10/05 14:49:59 by makacem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

SRC = push_swap.c \
	check_errors/ft_argv_not_int.c \
	check_errors/ft_check_errors.c \
	check_errors/ft_display_error.c \
	check_errors/ft_big_int.c \
	check_errors/ft_dup.c \
	build_stacks/ft_push.c \
	build_stacks/ft_build_stack_a.c \
	build_stacks/ft_build_stack_b.c \
	build_stacks/ft_print_stacks.c 

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