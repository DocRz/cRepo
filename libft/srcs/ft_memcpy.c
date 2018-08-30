/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_memcpy.c
                                                                                       ||||||}
 -> Creation Date : 30-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

void    ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  len;
    char    *t_src;
    char    *t_dst;

    t_src = (char*)src;
    t_dst = (char*)dst;
    len = 0;
    while (len < n)
    {
        t_dst[len] = t_src[len];
        len++;
    }
}
