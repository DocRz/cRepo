/*||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\
                                                                                      ||||||}
-> File Name : ft_atoi.c
                                                                                      ||||||}
-> Creation Date : 27-08-   2018
                                                                                      ||||||}
-> Last   Modified : Mon Aug 27 12:30:42 2018
                                                                                      ||||||}
-> Created By : >>>  {drRz}  <<<                                                      ||||||}
                                                                                      ||||||}
/||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/

int     ft_atoi(char *str)
{
    int c;
    int res;
    int neg;

    neg = 1;
    res = 0;
    c = 0;
    while (str[c] == '\t' || str[c] == '\n' || str[c] == '\r' || str[c] == '\v'
            || str[c] == '\f' || str[c] == 32)
        c++;
    if (str[c] == '-' || str[c] == '+')
    {
        if (str[c] == '-')
            neg = -1;
        c++;
    }
    while (str[c] >= '0' && str[c] <= '9')
    {
        res = res * 10 + (str[c] - 48);
        c++;
    }
    res *= neg;
    return (res);
}
