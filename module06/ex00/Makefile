# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 10:45:35 by tallaire          #+#    #+#              #
#    Updated: 2021/12/29 15:36:30 by tallaire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIR = ./
SRCS +=		main.cpp
SRCS +=		Convert.cpp


OBJS_DIR 	= 	.obj/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

YELLOW = \033[033m
GREEN = \033[032m
BLUE = \033[36m
RED = \033[031m
PURPLE = \033[35m
RESET = \033[0m

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "$(YELLOW)$(notdir $(basename $@))...$(RESET)\t\t[$(GREEN)OK$(RESET)]"
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "[$(GREEN)$(NAME) compiled$(RESET)]"

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re all
