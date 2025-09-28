#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

//character checks
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);

//string functions
size_t ft_strlen(const char *c);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *s, size_t n);
void *ft_memmove(void *dest, const void *s, size_t len);
void *ft_memset(void *s, int c, size_t len);

#endif