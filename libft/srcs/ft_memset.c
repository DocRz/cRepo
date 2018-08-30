/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_memset.c
                                                                                      ||||||}
-> Creation Date : 29-08-   2018
                                                                                      ||||||}
-> Last   Modified : Wed Aug 29 08:52:15 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t          t_len;
    unsigned char   tmp[len];

    t_len = -1;
    while (++t_len < len)
        tmp[t_len] = c + 48;
    b = tmp;
    return (b);
}
