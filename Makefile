# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: starrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 11:30:09 by starrit           #+#    #+#              #
#    Updated: 2017/02/11 11:46:32 by starrit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

CC = gcc
FLAGS = -g\
		-Wall -Wextra -Werror
SRCSDIR = framework/

BASENAME = 

SRCS = $(addprefix $(SRCSDIR), $(addsuffix .c, $(BASENAME)))
OBJS = $(addsuffix .o, $BASENAME))

HEAD = .h

all = $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "making library."
	# + compile tests

#test:
#	exec tests

clean:
	@rm -f $(OBJS)
	@echo "deleting objects."

fclean: clean
	@rm -f $(NAME)
	@echo "deleting exec."

re: fclean all

.PHONY: all $(NAME) clean fclean re #test
