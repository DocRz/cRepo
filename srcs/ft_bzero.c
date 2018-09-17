/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_bzero.c
                                                                                       ||||||}
 -> Creation Date : 30-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    tmp[n];
    size_t  len;

    len = -1;
    if (n > 0)
    {
        while (len < n)
            tmp[len] = 0;
        s = tmp;
    }
    else
        return ;
}
