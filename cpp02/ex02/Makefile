# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rene <rene@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/25 21:06:25 by rene              #+#    #+#              #
#    Updated: 2023/08/25 21:06:38 by rene             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the binary output
NAME = fixed

# Compiler and flags
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Source and object files
SRCS := main.cpp Fixed.cpp

# Colors
BLACK    = \033[30;1m
RED      = \033[0;31m
GREEN    = \033[32;1m
YELLOW   = \033[33;1m
BLUE     = \033[34;1m
PURPLE   = \033[35;1m
CYAN     = \033[36;1m
WHITE    = \033[37;1m
GRAY     = \033[90;1m
MAGENTA  = \033[0;95m
BOLD     = \033[1m
RESET    = \033[0m

all: $(NAME)

$(NAME):
	@echo "$(YELLOW)Creating binary $(GREEN)$(NAME)$(RESET)"
	@$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)
	@echo "$(GREEN)Compilation successful!$(RESET)"

clean:
	@echo "$(YELLOW)Removing binary $(RED)$(NAME)$(RESET)"
	@rm -rf $(NAME)
	@echo "$(GREEN)Binary removed.$(RESET)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re