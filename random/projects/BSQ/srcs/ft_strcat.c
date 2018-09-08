/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_strcat.c
                                                                                       ||||||}
 -> Creation Date : 08-09-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

char    *ft_strcat(char *full_buff, char *buff)
{
    int     c;
    int     i;
    char    *tmp;

    c = 0;
    i = 0;
    while (full_buff[c])
        c++;
    while (buff[i])
        i++;
    if (!(tmp = (char*)malloc(sizeof(char) * (i + c + 1))))
        return (NULL);
    c = 0;
    while (full_buff[c])
    {
        tmp[c] = full_buff[c];
        c++;
    }
    i = 0;
    while (buff[i])
    {
        tmp[c] = buff[i];
        c++;
        i++;
    }
    tmp[c] = '\0';
    return (tmp);
}
