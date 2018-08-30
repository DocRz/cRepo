/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_strdup.c
                                                                                       ||||||}
 -> Creation Date : 30-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "../includes/libft.h"

char    *strdup(const char *s1)
{
    int     c;
    char    *dup;

    c = 0;
    while (s1[c])
        c++;
    if (!(dup = (char*)malloc(sizeof(char) * c)))
    {
        errno = ENOMEM;
        return (NULL);
    }
    c = -1;
    while(s1[++c])
        dup[c] = s1[c];
    dup[c] = '\0';
    return (dup);
}
