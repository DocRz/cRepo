/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_memccpy.c
                                                                                       ||||||}
 -> Creation Date : 30-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t  len;
    char    *t_src;
    char    *t_dst;

    t_src = (char*)src;
    t_dst = (char*)dst;
    len = 0;
    while (len < n)
    {
        if (t_src[len] == c + 48)
            return ((void*)t_dst + (len + 1));
        t_dst[len] = t_src[len];
        len++;
    }
    return ((void*)t_dst);
}
