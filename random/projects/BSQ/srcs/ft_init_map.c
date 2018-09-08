/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_init_map.c
                                                                                      ||||||}
-> Creation Date : 07-09-2018
                                                                                      ||||||}
-> Last Modified : Fri Sep  7 20:12:29 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

int     **ft_init_map(char *file_name)
{
    int     x;
    int     y;
    int     ret;
    char    buff[BUFF_SIZE + 1];
    char    *full_buff;
    int     **

    fd = open(file_name, O_RDONLY);

    while ((ret = read(fd, buff, BUFF_SIZE)))
    {
        buff[ret] = '\0';
        full_buff = ft_concat_str(buff);
    }
    x = 0;
    while (full_buff[x] != '\n')
        x++;
    while(full_buff[x])
    {
        
    }

}
