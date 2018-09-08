#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define BUFF_SIZE 4096;

void    ft_putstr(char *str);

void    ft_putchar(char c);

int     ft_strlen(char *str);

int     **ft_init_map(char *file_name);

# endif
