#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 09:48:23 by bwaegene          #+#    #+#              #
#    Updated: 2017/02/11 21:49:57 by starrit          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Disable implicit rules
.SUFFIXES:

# Compiler configuration
CC = gcc
CFLAGS = -Wall -Wextra -Werror
## Flags for the C preprocessor
CPPFLAGS = -I. -I../$(LIB) -I../libft/include/
## Libraries path
LDFLAGS = -L../
## Libraries to link into the executable
LDLIBS = -lunit
NAME = tests

# Project related variables
SRC_PATH = .
SRC_NAME =	main.c								\
			ft_atoi/basic_positive_test			\
			ft_atoi/basic_negative_test			\
			ft_atoi/basic_jump_test				\
			ft_atoi/null_test					\
			ft_atoi/error_test					\
			ft_atoi/error_stop_test				\
			ft_atoi/error_signe_test			\
			ft_atoi/intmin_test					\
			ft_atoi/intmax_test					\
			ft_atoi/small_negative_loop_test	\
			ft_atoi/small_potitive_loop_test	\
			ft_atoi/medium_negative_loop_test	\
			ft_atoi/medium_positive_loop_test	\
			ft_atoi/large_negative_loop_test	\
			ft_atoi/large_positive_loop_test	\

OBJ_PATH =  obj
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
LIB = framework
INCLUDE = include
HEADER = ../$(LIB)/$(LIB).h

DEBUG ?= 0
ifeq ($(DEBUG), 1)
    CFLAGS += -g
endif

all: $(NAME)

$(NAME): ../libunit.a $(SRC)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(SRC) -o $(NAME)

$(OBJ_PATH):
	mkdir $@

$(OBJ): | $(OBJ_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# /!\ Dirty workaround /!\
# If make on the libft directory should rebuild something then PHONY the rule
# libft to build it. Otherwise it relink.
ifeq ($(shell $(MAKE) --question -C ../ ; echo $$?), 1)
.PHONY: ../libunit.a
endif

../libunit.a:
	$(MAKE) -C ../

.PHONY: clean
clean:
	$(MAKE) -C ../ clean
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(MAKE) -C ../ fclean
	$(RM) -r $(NAME) *.dSYM

re: fclean
	$(MAKE) all
