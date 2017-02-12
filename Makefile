# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: starrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 11:30:09 by starrit           #+#    #+#              #
#    Updated: 2017/02/12 13:49:18 by starrit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Disable implicit rules
.SUFFIXES:

# Compiler configuration
CC = gcc
CFLAGS = -Wall -Wextra -Werror
## Flags for the C preprocessor
CPPFLAGS = -I$(INCLUDE) -I$(LIB_PATH)/include
## Libraries path
LDFLAGS = -L$(LIB)
## Libraries to link into the executable
LDLIBS = -lft
NAME = libunit.a

# Project related variables
SRC_PATH = framework
SRC_NAME =	ft_add_test_lst.c			\
			ft_create_test_lst.c		\
			ft_del_test_lst.c			\
			load_test.c					\
			launch_test.c				\
			print_header.c				\
			print_total.c
OBJ_PATH =  obj
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
LIB_PATH = libft
LIB_NAME = 	ft_putstr.c					\
			ft_putendl.c				\
			ft_putchar.c				\
			ft_strlen.c					\
			ft_strdup.c					\
			ft_strcpy.c					\
			ft_putnbr.c					\
			ft_atoi.c					\
			ft_itoa.c					\
			ft_isdigit.c				\
			ft_isspace.c				\
			ft_strnew.c					\
			ft_memset.c					\
			ft_strdel.c					\
			ft_memdel.c
LIB_OBJ = $(addprefix obj/, $(LIB_NAME:.c=.o))
INCLUDE = framework
HEADER = $(INCLUDE)/$(NAME:.a=.h)

DEBUG ?= 0
ifeq ($(DEBUG), 1)
    CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(addprefix $(LIB_PATH)/, $(LIB_OBJ)) $(OBJ)
	ar rc $(NAME) $(addprefix $(LIB_PATH)/, $(LIB_OBJ)) $(OBJ)
	ranlib $(NAME)

$(OBJ_PATH):
	mkdir $@

$(OBJ): | $(OBJ_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# /!\ Dirty workaround /!\
# If make on the libft directory should rebuild something then PHONY the rule
# libft to build it. Otherwise it relink.
ifeq ($(shell $(MAKE) --question -C ./$(LIB_PATH) ; echo $$?), 1)
.PHONY: $(LIB_PATH)/obj/%.o
endif

$(LIB_PATH)/obj/%.o:
	$(MAKE) -C ./$(LIB_PATH) $(LIB_OBJ)

.PHONY: clean
clean:
	$(MAKE) -C ./$(LIB_PATH) clean
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(MAKE) -C ./$(LIB_PATH) fclean
	$(RM) -r $(NAME) $(NAME).dSYM

re: fclean
	$(MAKE) all
