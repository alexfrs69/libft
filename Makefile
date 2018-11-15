# Main var
NAME = libft.a

SHELL = /bin/zsh
# GCC

CC = gcc
CFLAGS = -Wall -Wextra -Werror
# Sources & Objects
SRCS = 	ft_strlen.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

# Includes

INCLUDES = -I .

# Utils

ARFLAGS = rcs
RM = rm -rf

# Compiling & other stuff

all : $(NAME)

$(NAME) : $(OBJS)
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@echo "\e[1;32m Creating $@...\e[0m"

%.o : %.c
	@echo -n "\e[1;34m Compiling $<...\e[0m "
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)
	@echo "\e[1;32mOK!\e[0m"

clean :
	@$(RM) $(OBJS)
	@echo "\e[1;33m Cleaning Objects. \e[0m"

fclean : clean
	@$(RM) $(NAME)
	@echo "\e[1;33m Cleaning $(NAME). \e[0m"

re : fclean all

.PHONY : all clean fclean re
