/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 30-08-2018
                                                                                      ||||||}
-> Last Modified : Mon Sep  3 14:25:56 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "includes/libft.h"

# define BUFF_SIZE  400

int     main(void)
{
    const char      *src;
    const char      *dst;
    char            buff[BUFF_SIZE];
    int             src_len;
    int             dst_len;
    int             ret;


    write(1, "Length of src:", 14);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    src_len = ft_atoi(buff);

    write(1, "Length of dst:", 14);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    dst_len = ft_atoi(buff);

    if (!(src = (char*)malloc(sizeof(char) * src_len + 1)))
        return (1);
    if (!(dst = (char*)malloc(sizeof(char) * dst_len + 1)))
         return (1);

    write(1, "Content of src:", 15);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    src = ft_strcpy((char*)src, (const char*)buff);

    write(1, "Content of dst:", 15);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    dst = ft_strcpy((char*)dst, (const char*)buff);

    src = (const char*)ft_strcat((char*)src, dst);
    printf("Src: %s\nDst: %s\n", src, dst);
    return (0);
}
