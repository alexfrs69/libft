NAME = libft.a

# GCC
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Sources & Objects
SRCS = 	srcs/ft_strlen.c \
		srcs/ft_putstr.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_putchar.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putendl.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putnbr.c \

OBJS_PATH = objs/
OBJS = $(patsubst srcs/%.c,$(OBJS_PATH)%.o, $(SRCS))

# Includes

INCLUDES = -I includes/

# Utils

ARFLAGS = rcs
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Compiling $(NAME)..."

objs/%.o : srcs/%.c
	@mkdir -p $(OBJS_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)
	@echo "Compiling $<..."

clean :
	@$(RM) $(OBJS_PATH)
	@echo "Cleaning $(OBJS_PATH) directory"

fclean : clean
	@$(RM) $(NAME)
	@echo "Cleaning $(NAME)"

re : fclean all

.PHONY = all clean fclean re
