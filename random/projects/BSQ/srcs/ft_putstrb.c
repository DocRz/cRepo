/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                       ||||||}
 -> File Name : ft_putchar.c
                                                                                       ||||||}
 -> Creation Date : 31-08-2018
                                                                                       ||||||}
 -> Last   Modified :
                                                                                       ||||||}
 -> Created By : >>>  {drewrz}  <<<                                                    ||||||}
                                                                                       ||||||}
 /||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "bsq_header.h"

void    ft_putstrb(char *str, int len)
{
    write(1, str, len);
}
