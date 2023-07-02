# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-youb <ael-youb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 17:23:35 by ael-youb          #+#    #+#              #
#    Updated: 2023/07/02 19:26:36 by ael-youb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence

SRC		= main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
OBJS 	= $(SRC:.c=.o)

CC		= clang++
FLAGS	= -Wall -Wextra -Werror -std=c++98
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