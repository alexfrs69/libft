NAME = libft.a

# GCC
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Sources & Objects
SRCS = srcs/ft_strlen.c

OBJS_PATH = objs/
OBJS = $(patsubst srcs/%.c,$(OBJS_PATH)%.o, $(SRCS))

# Includes

INCLUDES = -I includes/

# Utils

ARFLAGS = rcs
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

objs/%.o : srcs/%.c
	mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean :
	$(RM) $(OBJS_PATH)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY = all clean fclean re
