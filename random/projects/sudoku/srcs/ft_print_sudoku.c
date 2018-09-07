/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_print_sudoku.c
                                                                                      ||||||}
-> Creation Date : 06-09-2018
                                                                                      ||||||}
-> Last Modified : Thu Sep  6 23:53:31 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

void    ft_print_sudoku(char **sudoku)
{
    int x;
    int y ;

    y = 0;
    while (y < 9)
    {
        x = -1;
        while (++x < 9)
        {
            ft_putchar(sudoku[x][y]);
            if (x != 8)
                ft_putchar('|');
        }
        ft_putchar('\n');
        y++;
    }
}
