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
    unsigned long   x;
    unsigned char   val;

    if (c < 0)
    {
        write(1, "Invalid parameters\n", 19);
        return (NULL);
    }
    val = c + 48;
    x = -1;
    while (++x < len)
        *(unsigned char*)b++ = val;
    return (b);
}
