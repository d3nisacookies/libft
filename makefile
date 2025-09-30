# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Source files (all .c files in current directory)
SRCS = $(wildcard *.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re