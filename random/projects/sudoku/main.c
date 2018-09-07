/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 06-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 01:19:50 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

int     main(void)
{
    char **sudoku;

    sudoku = ft_init_sudoku();
    ft_putstr("Solving sudoku...\n\n");
    ft_solve_sudoku(sudoku, 0, 0);
    ft_print_sudoku(sudoku);
    return (0);
}
