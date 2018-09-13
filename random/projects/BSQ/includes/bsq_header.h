#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>


# define BUFF_SIZE 40960

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

int     **ft_init_map(char *file_name, t_elem *elem);

char    *ft_strcat(char *buff, char *new_buff);

int     **ft_solve_bsq(int **map, t_elem *elem, int *max);

int     ft_set_number(int **map, int x, int y, int *max);

char    **ft_set_map(int **map, t_elem *elem, int *max);

char    **ft_set_square(char **print_map, int x, int y, int num, t_elem *elem);

void    ft_print_solved(char **map, int size);

void    ft_putstrb(char *str, int len);

# endif
