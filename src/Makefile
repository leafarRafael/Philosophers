# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 13:07:30 by rbutzke           #+#    #+#              #
#    Updated: 2024/06/22 12:49:38 by rbutzke          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Static library
NAME                := philo.a

# Compiler and flags
CC                  := cc
CFLAGS              := -Wall -Werror -Wextra -g3
O_FLAGS             := -c

# Header file includes and directory
INCLUDES            := -I ../includes
DIR_LIB             := lib/
DIR_LIST            := list/
DIR_MAIN            := main/
DIR_VALID           := valid_arg/

# Sources
LIB                 := atoi.c
LIST                := add_back.c init.c
MAIN                := main.c set_arguments.c
VALID               := valid.c

# All sources
SRC_FILES           := $(addprefix $(DIR_LIB), $(LIB)) \
                       $(addprefix $(DIR_LIST), $(LIST)) \
                       $(addprefix $(DIR_MAIN), $(MAIN)) \
                       $(addprefix $(DIR_VALID), $(VALID))

NUM_FILES           := $(words $(SRC_FILES))

# Directory for object files
OBJS                := objs
O_FILES             := $(SRC_FILES:%.c=$(OBJS)/%.o)

# Default rule to create the static library
all: $(NAME)

# Rule to create the static library
$(NAME): $(O_FILES)
	@ar -rc $(NAME) $(O_FILES)

# Rule to compile source files into object files
$(OBJS)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(INCLUDES) $(O_FLAGS) $(CFLAGS) $< -o $@
	@$(eval COUNT := $(shell echo $$(($(COUNT)+1))))
	@printf "Creating binaries from source files [%s]\r" $(shell echo "$$(($(COUNT) * 100 / $(NUM_FILES)))%")
	@sleep 0.3

