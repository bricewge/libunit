# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: starrit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 11:30:09 by starrit           #+#    #+#              #
#    Updated: 2017/02/11 12:02:30 by starrit          ###   ########.fr        #
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

HEAD = .h #	+ libft.h if necessary

all = $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "making library."

#test: $(NAME)
	#	compile tests
	#	exec tests

clean:
	@rm -f $(OBJS)
	#	rm -f test/OBJS
	@echo "deleting objects."

fclean: clean
	@rm -f $(NAME)
	#	rm -f test/a.out
	@echo "deleting exec."

re: fclean all

.PHONY: all $(NAME) clean fclean re #test
