#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 09:48:23 by bwaegene          #+#    #+#              #
#    Updated: 2017/02/11 23:31:47 by starrit          ###   ########.fr        #
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
NAME = real-tests

# Project related variables
SRC_PATH = .
SRC_NAME =	main.c						\
		ft_atoi/00_launcher.c				\
		ft_atoi/01_basic_negative_test.c		\
		ft_atoi/02_basic_positive_test.c		\
		ft_atoi/03_basic_jump_test.c			\
		ft_atoi/04_null_test.c				\
		ft_atoi/05_error_test.c				\
		ft_atoi/06_error_stop_test.c			\
		ft_atoi/07_error_signe_test.c			\
		ft_atoi/08_intmin_test.c			\
		ft_atoi/09_intmax_test.c			\
		ft_atoi/10_small_negative_loop_test.c		\
		ft_atoi/11_small_positive_loop_test.c		\
		ft_atoi/12_medium_negative_loop_test.c		\
		ft_atoi/13_medium_positive_loop_test.c		\
		ft_atoi/14_large_negative_loop_test.c		\
		ft_atoi/15_large_positive_loop_test.c
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

$(NAME): ../libunit.a $(SRC) real_tests.h
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

test: $(NAME)
	./$(NAME)

.PHONY: clean
clean:
	$(MAKE) -C ../ clean
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(MAKE) -C ../ fclean
	$(RM) -r $(NAME) *.dSYM

re: fclean
	$(MAKE) all
