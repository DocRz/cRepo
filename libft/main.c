/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : main.c
                                                                                      ||||||}
-> Creation Date : 30-08-2018
                                                                                      ||||||}
-> Last Modified : Thu Aug 30 23:18:34 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

#include "/includes/libft.h"

# define BUFF_SIZE  400

int     main(int ac, char **av)
{
    char    *src;
    char    *dst;
    char    buff[BUFF_SIZE];
    int     src_len;
    int     dst_len;
    int     ret;


    write(1, "Length of src:\n", 15);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    src_len = ft_atoi(buff);

    write(1, "\nLength of dest:i\n", 17);
    ret = read(1, buff, BUFF_SIZE);
    buff[ret] = '\0';
    dst_len = ft_atoi(buff);

    printf("\nSrc: %d\nDst: %d\n", src_len, dst_len);
    return (0);
}
