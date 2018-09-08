#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>


# define BUFF_SIZE 4096

typedef struct  g_elem
{
    int     size;
    char    free;
    char    obs;
    char    square;
}               t_elem;

void    ft_putnbr(int nbr);

void    ft_putstr(char *str);

void    ft_putchar(char c);

int     ft_strlen(char *str);

int     **ft_init_map(char *file_name);

char    *ft_strcat(char *buff, char *new_buff);

# endif
