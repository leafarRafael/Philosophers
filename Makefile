# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 08:00:03 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/22 09:38:35 by rbutzke          ###   ########.fr        #
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
SOURCES				:= src
OBJECT				:= src/objs

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
$(NAME): sources

#-----------------------------------------------------------------------------------------	
# Rule to create object files
sources:
	@$(MAKE) -C $(SOURCES) --no-print-directory

#-----------------------------------------------------------------------------------------
# Rule to clean
clean:
	@$(CLEAN_CMD) $(BINARY) $(OBJECT)
	
fclean: clean
	@$(CLEAN_CMD) $(NAME)
	
re: fclean all

.PHONY: all list main main_clean main_fclean list_clean list_fclean clean fclean re