/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_print_solved.c
                                                                                       ||||||}
 -> Creation Date : 09-09-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

void    ft_print_solved(char **map, int size)
{
    int x;

    x = -1;
    while (++x < size)
    {
        ft_putstrb(map[x], size);
        ft_putchar('\n');
    }
}
