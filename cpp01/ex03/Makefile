# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rene <rene@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 13:47:22 by rene              #+#    #+#              #
#    Updated: 2023/08/18 13:47:24 by rene             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the binary output
NAME = violence

# Compiler and flags
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Directories
INC_DIR = includes
SRCS_DIR = srcs
CLSS_DIR = classes
OBJS_DIR = objs

# Source and object files
SRCS := main.cpp \
        $(wildcard $(SRCS_DIR)/*.cpp) \
        $(wildcard $(SRCS_DIR)/$(CLSS_DIR)/*.cpp)
OBJS := $(patsubst $(SRCS_DIR)/%.cpp, $(OBJS_DIR)/%.o, $(SRCS))

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

# Compile .cpp files to .o files
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@echo "$(YELLOW)Compiling $(BLUE)$< $(YELLOW)to $(CYAN)$@$(RESET)"
	@$(CC) $(CPPFLAGS) -I $(INC_DIR) -c $< -o $@

# Link .o files to create the binary
$(NAME): $(OBJS)
	@echo "$(YELLOW)Linking objects to create binary $(GREEN)$(NAME)$(RESET)"
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compilation successful!$(RESET)"

# Clean object files
clean:
	@echo "$(YELLOW)Removing $(RED)object files...$(RESET)"
	@rm -rf $(OBJS_DIR)
	@echo "$(GREEN)Object files removed.$(RESET)"

# Clean object files and the binary
fclean: clean
	@echo "$(YELLOW)Removing binary $(RED)$(NAME)$(RESET)"
	@rm -rf $(NAME)
	@echo "$(GREEN)Binary removed.$(RESET)"

# Re-compile everything
re: fclean all

.PHONY: all clean fclean re