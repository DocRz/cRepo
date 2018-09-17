/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : strncpy.c
                                                                                      ||||||}
-> Creation Date : 27-08-   2018
                                                                                      ||||||}
-> Last   Modified : Mon Aug 27 12:22:55 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

char  *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t  c;

    c = 0;
    while (src[c] && c < len)
    {
        dst[c] = src[c];
        c++;
    }
    while (c < len)
    {
        dst[c] = '\0';
        c++;
    }
    return (dst);
}
