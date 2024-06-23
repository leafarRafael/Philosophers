# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42so.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 13:07:30 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/23 14:45:48 by rbutzke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Static library
NAME                := ../philo.a

# Compiler and flags
CC                  := cc
CFLAGS              := -Wall -Werror -Wextra -g3
O_FLAGS             := -c

# Command to clean up files
CMD_CLEAN           := rm -Rf

# Header file includes
INCLUDES            := -I ../../includes

# Source files
FILE                := routine.c
NUM_FILES           := $(words $(FILE))

# Directory for object files
OBJS                := objs
O_FILE              := $(FILE:%.c=$(OBJS)/%.o)

# Default rule to create the static library
all: $(NAME)

# Rule to create the static library
$(NAME): $(O_FILE)
	@ar -rc $(NAME) $(O_FILE)
	@echo ""

# Rule to compile source files into object files
$(OBJS)/%.o: %.c
	@mkdir -p $(OBJS)
	@$(CC) $(INCLUDES) $(O_FLAGS) $(CFLAGS) $< -o $@
	@$(eval COUNT := $(shell echo $$(($(COUNT)+1))))
	@printf "Creating binaries from action functions   [%s]\r" $(shell echo "$$(($(COUNT) * 100 / $(NUM_FILES)))%")

# Rule to clean up object files
clean:
	@$(CMD_CLEAN) $(OBJS)
