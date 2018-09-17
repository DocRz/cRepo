#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>

void        ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void        *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

char        *ft_strchr(const char *str, int c);

void        ft_bzero(void *s, size_t n);

char        *ft_strcat(char *restrict s1, const char *restrict s2);

char        *ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

void        *ft_memset(void *b, int c, size_t len);

int         ft_strlen(const char *str);

char        *ft_strchr(const char *str, int c);

void        ft_putstr(char *str);

void        ft_putchar(char c);

const char  *ft_strcpy(char *dst, const char *src);

char        *ft_strncpy(char *dst, const char *src, size_t len);

int         ft_atoi(char *str);

char        *strdup(const char *s1);

#endif
