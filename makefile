# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_putchar_fd.c ft_putnbr_fd.c

# Output executable
NAME = a.out

# Default target
all: $(NAME)

# Build executable
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

# Clean object files
clean:
	rm -f *.o *.exe

# Remove executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
