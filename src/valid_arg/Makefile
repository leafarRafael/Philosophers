# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 13:07:30 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/20 15:43:33 by rbutzke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Static library
NAME                := ../philo.a

# Compiler and flags
CC                  := cc
CFLAGS              := -Wall -Werror -Wextra -g3 -MMD -MP
O_FLAGS             := -c

# Command to clean up files
CMD_CLEAN           := rm -Rf

# Header file includes
INCLUDES            := -I ../../includes

# Source files
FILE                := valid.c
NUM_FILES           := $(words $(FILE))

# Directory for object files
OBJS                := objs
O_FILE              := $(FILE:%.c=$(OBJS)/%.o)
DEP_FILES           := $(O_FILES:%.o=.d)

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
	@printf "Creating binaries from valid functions [%s]\r" $(shell echo "$$(($(COUNT) * 100 / $(NUM_FILES)))%")

# Include dependency files
-include $(DEP_FILES)

# Rule to clean up object files
clean:
	@$(CMD_CLEAN) $(OBJS)

# Rule to clean up object files and the static library
fclean: clean
	@$(CMD_CLEAN) $(NAME)

# Rule to recompile everything
re: fclean all

.PHONY: all clean fclean re