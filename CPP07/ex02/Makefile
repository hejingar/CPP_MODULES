# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 13:44:52 by ael-youb          #+#    #+#              #
#    Updated: 2023/08/23 13:45:10 by ael-youb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= array

SRC		= main.cpp Iter.hpp
OBJS 	= $(SRC:.c=.o)

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf

GREEN	= \033[32m
YELLOW	= \033[33m
GRAY	= \033[37m
RESET	= \033[0m
CURSIVE	= \033[3m

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)$(NAME)$(RESET)$(GRAY) created.$(RESET)"

all: $(NAME)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@
		@echo "$(GREEN)$(OBJS)$(RESET)$(GRAY) created.$(RESET)"

clean:
	$(RM) $(NAME)
	@echo "$(YELLOW)$(NAME)$(RESET)$(GRAY) deleted.$(RESET)"

fclean: clean

re: fclean all