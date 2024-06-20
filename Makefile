# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 08:00:03 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/20 18:00:55 by rbutzke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------------------------------------------------------------------	
# Program name
NAME                := philo

#-----------------------------------------------------------------------------------------	
# Path to the static library
BINARY              := ./src/philo.a

#-----------------------------------------------------------------------------------------
# Compiler and flags
CC                  := cc
CFLAGS              := -Wall -Werror -Wextra -g3
OFLAGS              := -c

#-----------------------------------------------------------------------------------------	
# clean comand and flag
CLEAN_CMD				:= rm -Rf

#-----------------------------------------------------------------------------------------	
# Paths to the subdirectories containing source files
LIST_PATH           := src/list
MAIN_PATH           := src/main
VALID_PATH          := src/valid_arg
LIB_PATH			:= src/lib

#-----------------------------------------------------------------------------------------	
# Default rule to create the executable
all: $(NAME)

#-----------------------------------------------------------------------------------------	
# Rule to link the static library and create the executable
$(NAME):
	@$(CC) $(BINARY) -o $(NAME)
	@printf "\nExecutable %s created successfully\n" $(NAME)

#-----------------------------------------------------------------------------------------	
# Rule to create the static library by compiling source files in subdirectories
$(NAME): object

#-----------------------------------------------------------------------------------------	
# Rule ti create object
object:
	@$(MAKE) -C $(VALID_PATH) --no-print-directory
	@$(MAKE) -C $(LIST_PATH) --no-print-directory
	@$(MAKE) -C $(MAIN_PATH) --no-print-directory
	@$(MAKE) -C $(LIB_PATH) --no-print-directory

#-----------------------------------------------------------------------------------------	
# Rule to clean up object files
files_object: 
	@$(MAKE) -C $(VALID_PATH) clean --no-print-directory
	@$(MAKE) -C $(MAIN_PATH) clean --no-print-directory
	@$(MAKE) -C $(LIST_PATH) clean --no-print-directory
	@$(MAKE) -C $(LIB_PATH) clean --no-print-directory

#-----------------------------------------------------------------------------------------
# Rule to clean
clean: files_object
	$(CLEAN_CMD) $(BINARY)
	
fclean: clean
	$(CLEAN_CMD) $(NAME)
	
re: fclean all

.PHONY: all list main main_clean main_fclean list_clean list_fclean clean fclean re