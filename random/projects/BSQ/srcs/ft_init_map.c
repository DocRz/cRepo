/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_init_map.c
                                                                                      ||||||}
-> Creation Date : 07-09-2018
                                                                                      ||||||}
-> Last Modified : Sat Sep  8 21:41:13 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

int     **ft_init_map(char *file_name, t_elem *elem)
{
    int     fd;
    int     c;
    int     i;
    int     x;
    int     ret;
    char    buff[BUFF_SIZE + 1];
    char    *full_buff;
    int     **map;

    fd = open(file_name, O_RDONLY);

    if (!(full_buff = (char*)malloc(sizeof(char) * 1)))
        return (NULL);
    full_buff[0] = '\0';

    while ((ret = read(fd, buff, BUFF_SIZE)))
    {
        buff[ret] = '\0';
        full_buff = ft_strcat(full_buff, buff);
    }
    x = 0;
    elem[0].size = 0;
    while (full_buff[x] != '\n')
    {
        while (full_buff[x] >= '0' && full_buff[x] <= '9')
        {
            elem[0].size = elem[0].size * 10 + (full_buff[x] - 48);
            x++;
        }
        elem[0].free = full_buff[x++];
        elem[0].obs = full_buff[x++];
        elem[0].square = full_buff[x++];
    }
    if (!(map = (int**)malloc(sizeof(int*) * elem[0].size)))
        return (NULL);
    c = 0;
    while (c < elem[0].size)
    {
        if (!(map[c] = (int*)malloc(sizeof(int) * elem[0].size)))
            return (NULL);
        c++;
    }
    c = 0;
    x++;
    while(full_buff[x])
    {
        i = 0;
        while (full_buff[x] != '\n')
        {
            if (full_buff[x] == elem[0].free)
                map[c][i] = 1;
            if (full_buff[x] == elem[0].obs)
                map[c][i] = 0;
            x++;
            i++;
        }
        c++;
        x++;
    }
    free(full_buff);
    return (map);
}
