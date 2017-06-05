# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chery <chery@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/14 19:08:14 by chery             #+#    #+#              #
#    Updated: 2017/05/14 19:08:15 by chery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=		hotrace

SRC=		hotrace.c		\
			get_next_line.c		\
			stringFunc.c	\
			btree.c		\
			keyComp.c

OBJ			:= $(SRC:%.c=%.o)

FLAGS 		:= -W -Wall -Werror -Wextra

# Colors
NO_COLOR	:= \x1b[0m
GREEN		:= \x1b[32;01m
RED			:= \x1b[31;01m
YELLOW		:= \x1b[33;01m
GRAY		:= \x1b[30;01m


.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(GRAY)Creating $(RED)$(NAME) $(NO_COLOR)"
	@gcc -o $(NAME) $(OBJ)
	@if [ -a $(NAME) ] ; \
	then \
		printf "\e[31G$(GREEN)✓$(NO_COLOR)\n" ; \
	fi;

%.o: %.c
	@printf "$(GRAY)Compiling $(GREEN)$(<:src/%.c=%) $(NO_COLOR)"
	@gcc -o $@ -c $(FLAGS) $<
	@if [ -a $(<) ] ; \
	then \
		printf "\e[31G$(GREEN)✓$(NO_COLOR)\n" ; \
	fi;

clean:
	@printf "$(GRAY)Removing objects$(NO_COLOR)"
	@rm -f $(OBJ)
	@printf "\e[31G$(GREEN)✓$(NO_COLOR)\n"

fclean: clean
	@printf "$(GRAY)Removing executable$(NO_COLOR)"
	@rm -f $(NAME)
	@printf "\e[31G$(GREEN)✓$(NO_COLOR)\n"

re: fclean all