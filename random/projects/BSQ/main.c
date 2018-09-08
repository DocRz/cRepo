/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 26-08-   2018
                                                                                      ||||||}
-> Last   Modified : Sun Aug 26 15:40:03 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

int     main(int ac, char **av)
{
    int **map;

    if (ac == 2)
        map = ft_init_map(av[1]);
    else
    {
        ft_putstr("No valid file to open\n");
        return (1);
    }
}
