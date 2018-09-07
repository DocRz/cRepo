/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 06-09-2018
                                                                                      ||||||}
-> Last Modified : Thu Sep  6 23:53:10 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "sudoku_header.h"

char    **ft_init_sudoku(void)
{
    char    **buff;
    int     line_call;
    int     call;
    int     ret;

    if (!(buff = (char**)malloc(sizeof(char*) * 10)))
        return (NULL);
    call = -1;
    while (++call < 10)
        if (!(buff[call] = (char*)malloc(sizeof(char) * 10)))
            return (NULL);
    call = 1;
    line_call = 1;
    ft_putstr("Welcome to Sudoku Solver:\nFill out each line, using '0' for blanks.\n");
    while (line_call)
    {
        ft_line_call(call);
        ret = read(1, buff[call - 1], BUFF_SIZE);
        buff[call - 1][9] = '\0';
        if (ret == 10 && ft_str_is_numeric(buff[call - 1]))
        {
            call++;
            if (call == 10)
                line_call = 0;
        }
        else
            ft_putstr("Line incorrect, try again..\n");
    }
    return (buff);
}
