/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_strcat.c
                                                                                       ||||||}
 -> Creation Date : 30-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

char    *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int c;
    int len;

    c = 0;
    len = 0;
    while (s1[c])
        c++;
    while (s2[len])
    {
        s1[c] = s2[len];
        c++;
        len++;
    }
    s1[c] = '\0';
    return(s1);
}
