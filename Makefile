# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterrada <jterrada@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 21:11:29 by jordi             #+#    #+#              #
#    Updated: 2025/03/01 12:25:51 by jterrada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror -g
LIBFT := ./lib/Libft
NAME = push_swap
DIR_SRC = src/
LIBS = -L$(LIBFT) -lft
SRC =  $(addprefix $(DIR_SRC), main.c checks.c parse.c errors.c algo_prep.c algorithm.c\
		$(addprefix operations/, rotate.c push.c swap.c r_rotate.c))

OBJ = $(patsubst src/%.c,bin/%.o,$(SRC))

HEADERS	:= -Iinclude -I $(LIBFT)/include

# Number of source files
NUM_SRC = $(words $(SRC))

all: libft $(NAME)

libft: $(LIBFT)/libft.a

$(LIBFT)/libft.a:
	@echo "🛠️  Building Libft..."
	@$(MAKE) -C $(LIBFT) > /dev/null
	@echo "✅ Libft successfully built!\n"

$(NAME): $(OBJ)
	@echo "🚧 Building $(NAME) executable..."
# @$(CC) $(OBJ) $(LIBS) $(HEADERS) $(LDFLAGS) -o $(NAME)
	@$(CC) $(OBJ) $(LIBS) $(HEADERS) -o $(NAME)
	@echo "🎉 $(NAME) ready to play!\n"

bin/%.o: src/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CCFLAGS) -c $< -o $@ $(HEADERS)
	@$(eval COUNT=$(shell expr $(COUNT) + 1))
	@printf "🔨 [%d/%d] Compiling %s\r" $(COUNT) $(NUM_SRC) $<

clean:
	@rm -f -r bin/
	@$(MAKE) --no-print-directory -C $(LIBFT) clean
	@echo "🧹 Cleaned up object files and build directories!\n"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) --no-print-directory -C $(LIBFT) fclean
	@echo "🧹 Executable and libraries cleaned!\n"

re: fclean all

.PHONY: all, clean, fclean, re, libft

COUNT = 0