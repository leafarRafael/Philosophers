# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 08:00:03 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/20 14:11:18 by rbutzke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME                := philo

# Path to the static library
BINARY              := ./src/philo.a

# Compiler and flags
CC                  := cc
CFLAGS              := -Wall -Werror -Wextra -g3
OFLAGS              := -c

#clean flag
CLEAN_CMD				:= rm -Rf

# Paths to the subdirectories containing source files
LIST_PATH           := src/list
MAIN_PATH           := src/main

# Default rule to create the executable
all: $(NAME)

$(NAME): list main

# Rule to link the static library and create the executable
$(NAME):
	@$(CC) $(BINARY) -o $(NAME)
	@printf "\nExecutable %s created successfully\n" $(NAME)

# Rule to create the static library by compiling source files in subdirectories
$(BINARY): list main

# Rule to compile source files in the 'list' subdirectory
list: 
	@$(MAKE) -C $(LIST_PATH) --no-print-directory

# Rule to compile source files in the 'main' subdirectory
main: 
	@$(MAKE) -C $(MAIN_PATH) --no-print-directory

# Rule to clean up object files in the 'main' subdirectory
main_clean: 
	@$(MAKE) -C $(MAIN_PATH) clean --no-print-directory

# Rule to clean up object files and the static library in the 'main' subdirectory
main_fclean: 
	@$(MAKE) -C $(MAIN_PATH) fclean --no-print-directory

# Rule to clean up object files in the 'list' subdirectory
list_clean: 
	@$(MAKE) -C $(LIST_PATH) clean --no-print-directory

# Rule to clean up object files and the static library in the 'list' subdirectory
list_fclean: 
	@$(MAKE) -C $(LIST_PATH) fclean --no-print-directory

# Rule to clean up object files in all subdirectories
clean: main_clean list_clean
	$(CLEAN_CMD) $(BINARY)
	
# Rule to clean up object files and the static library in all subdirectories
fclean: list_fclean main_fclean
	$(CLEAN_CMD) $(NAME)

# Rule to recompile everything
re: fclean all

.PHONY: all list main main_clean main_fclean list_clean list_fclean clean fclean re