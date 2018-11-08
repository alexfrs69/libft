# Main var
NAME = libft.a

SHELL = /bin/zsh
# GCC

CC = gcc

DEBUG = true

ifeq ($(DEBUG), true)
	CFLAGS = -Wall -Wextra -Werror -g
else
	CFLAGS = -Wall -Wextra -Werror
endif

# Sources & Objects
SRCS = 	srcs/ft_strlen.c \
		srcs/ft_putstr.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_putchar.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putendl.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putnbr.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_tolower.c \
		srcs/ft_toupper.c \
		srcs/ft_memset.c \
		srcs/ft_isalpha.c \
		srcs/ft_isdigit.c \
		srcs/ft_isalnum.c \
		srcs/ft_strcmp.c \

OBJS_PATH = objs/
OBJS = $(patsubst srcs/%.c,$(OBJS_PATH)%.o, $(SRCS))

# Includes

INCLUDES = -I includes/

# Utils

ARFLAGS = rcs
RM = rm -rf

# Compiling & other stuff

all : $(NAME)
ifeq ($(DEBUG), true)
	@echo "\e[1;31m *** DEBUG MODE *** \e[0m"
else
	@echo "\e[1;32m RELEASE MODE \e[0m"
endif

$(NAME) : $(OBJS)
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "\e[1;32m Creating $@...\e[0m"

$(OBJS_PATH)%.o : srcs/%.c
	@mkdir -p $(OBJS_PATH)
	@echo "\e[1;34m Compiling $<...\e[0m"
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)
	@echo "\e[1;32m $< OK!\e[0m"

clean :
	@$(RM) $(OBJS_PATH)
	@echo "\e[1;33m Cleaning $(OBJS_PATH) directory. \e[0m"

fclean : clean
	@$(RM) $(NAME)
	@echo "\e[1;33m Cleaning $(NAME). \e[0m"

re : fclean all

.PHONY : all clean fclean re
