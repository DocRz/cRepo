#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <stdlib.h>
# include <unistd.h>

void        *ft_memset(void *b, int c, size_t len);

int         ft_strlen(const char *str);

char        *ft_strchr(const char *str, int c);

const char  *ft_strcpy(char *dst, const char *src);

int         ft_atoi(char *str);

#endif
