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
    int     max[1];
    int     **map;
    t_elem  elem[1];
    char    **map_print;
    
    max[0] = 0;
    if (ac == 2)
        map = ft_init_map(av[1], elem);
    else
    {
        ft_putstr("No valid file to open\n");
        return (1);
    }
    map = ft_solve_bsq(map, elem, max);
    map_print = ft_set_map(map, elem, max);
    ft_print_solved(map_print, elem[0].size, elem[0].size_y);
    free(map_print);
    free(map);
    return (0);
}
