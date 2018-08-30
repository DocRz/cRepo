/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_strchr.c
                                                                                      ||||||}
-> Creation Date : 27-08-   2018
                                                                                      ||||||}
-> Last   Modified : Mon Aug 27 12:14:29 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
#include "../includes/libft.h"

char    *ft_strchr(const char *str, int c)
{
    unsigned int len;

    len = 0;
    while (str)
    {
        if (str[0] == c + 48)
            return ((char*)str);
        str++;
    }
    return (NULL);
}
