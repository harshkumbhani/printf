################################################################################
###############                     CONFIG                        ##############
################################################################################

NAME := libftprintf.a # name of the library
CC := cc
CFLAGS = -Wall -Wextra -Werror -g $(addprefix -I, $(INC_DIRS))

################################################################################
###############                 PRINT OPTIONS                     ##############
################################################################################

G := \033[32m
X := \033[0m
BO := $(shell tput bold)
LOG := printf "[$(BO)$(G)ⓘ INFO$(X)] %s\n"

################################################################################
###############                  DIRECTORIES                      ##############
################################################################################

OBJ_DIR := _obj
INC_DIRS := ./include
SRC_DIRS := ./srcs

# Tell the Makefile where headers and source files are
vpath %.h $(INC_DIRS)
vpath %.c $(SRC_DIRS)

################################################################################
###############                  SOURCE FILES                     ##############
################################################################################

SRCS := ft_printf.c ft_printnum.c ft_printstr.c

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

################################################################################
########                         COMPILING                      ################
################################################################################

all: $(NAME)

# Define the rule to create the library
# Used Options
# r : Insert the objs into the archive
# c : Create the archive if it doesn't exist
# s : Create an index for the archive

# s option is an efficiency option helpful when 
# linking programs with the library
$(NAME): $(OBJS)
	@ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(LOG) "Compiling $(notdir $@)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@$(LOG) "Creating object directory."
	@mkdir -p $@

# Define the rule to compile the source files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		$(LOG) "Cleaning $(notdir $(OBJ_DIR))"; \
		rm -rf $(OBJ_DIR); \
	else \
		$(LOG) "No objects to clean."; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		$(LOG) "Cleaning $(notdir $(NAME))"; \
		rm -f $(NAME); \
	else \
		$(LOG) "No library to clean."; \
	fi
	@rm -rf *.dSYM *.out
	
norm: $(SRCS)
	$(shell norminette | grep Error)
	 	
re: fclean all

# Specify that these rules do not correspond to a file name
.PHONY: all clean fclean re

test_a:test1 test2

test1:
	@$(CC) $(CFLAGS) $(NAME) ./srcs/main.c -o tester.out  -D PARAM=\"BYE\"
	@./tester.out

test2:
	@$(CC) $(CFLAGS) $(NAME) ./srcs/main.c -o tester.out -D PARAM=\"HELLO\ World!\"
	@./tester.out

test3:
	@$(CC) $(CFLAGS) $(NAME) ./srcs/main.c -o tester.out -D PARAM=\"\"
	@./tester.out
