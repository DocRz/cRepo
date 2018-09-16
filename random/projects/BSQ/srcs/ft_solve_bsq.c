/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_solve_bsq.c
                                                                                       ||||||}
 -> Creation Date : 08-09-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

int     ft_set_number(int **map, int x, int y, int *max)
{
    int num;

    num = (map[x][y - 1] < map[x - 1][y - 1]) ? map[x][y - 1] : map[x - 1][y - 1];
    num = (num < map[x - 1][y]) ? num : map[x - 1][y];
    num++;

    max[0] = (num > max[0]) ? num : max[0];
    return (num);
}

int     **ft_solve_bsq(int **map, t_elem *elem, int *max)
{
    int x;
    int y;

    x = 0;
    while (x < elem[0].size)
    {
        y = 0;
        while (y < elem[0].size_y)
        {
            if (map[x][y] == 0)
                y++;
            else if (x == 0 || y == 0)
                y++;
            else
            {
                map[x][y] = ft_set_number(map, x, y, max);
                y++;
            }
        }
        x++;
    }
    return (map);
}
