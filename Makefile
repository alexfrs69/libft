NAME = libft.a

# GCC
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Sources & Objects
SRCS = srcs/ft_strlen.c

OBJS = $(patsubst srcs/%.c,objs/%.o, $(SRCS))

# Includes

INCLUDES = -I includes/

# Utils

ARFLAGS = rcs
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

objs/%.o : srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY = all clean fclean re
