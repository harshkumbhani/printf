# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 11:39:57 by hkumbhan          #+#    #+#              #
#    Updated: 2023/04/21 17:31:54 by hkumbhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Set the name of the library
NAME = libftprintf.a

# Set the compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Set the source files for the library
SRCS = ft_printf.c ft_printnum.c ft_printstr.c

# Set the source files for the library
#BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Set the object files for mandatoru and bonus part of the libray 
OBJS = $(SRCS:%.c=%.o)
#BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

# Define the "all" rule
all: $(NAME)

# Define the rule to create the library
# Used Options
# r : Insert the objs intot eh archive
# c : Create the archive if it doesn't exist
# s : Create an index for the archive
# s option is an efficiency option helpful when 
# linking programs with the library
$(NAME): $(OBJS)
	@ar rcs $@ $^

# Define the "bonus" rule
#bonus: $(BONUS_OBJS) $(OBJS)
#	ar rcs $(NAME) $^ 

# Define the rule to compile the source files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm	-f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)
	
norm: $(SRCS)
	$(shell norminette | grep Error)
	 	
re: fclean all

# Specify that these rules do not correspond to a file name
.PHONY: all clean fclean re

test_all:testa testb

testa: all
	@$(CC) $(NAME) main.c -o tester.out  -D PARAM=\"BYE\"
	@./tester.out >> result

testb: all
	@$(CC) $(NAME) main.c -o tester.out -D PARAM=\"HELLO\"
	@./tester.out >> result