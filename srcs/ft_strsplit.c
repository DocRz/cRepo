/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:09:55 by andrewrze         #+#    #+#             */
/*   Updated: 2018/10/31 21:34:31 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     ft_wrdcount(char const *str, char c)
{
    int x;
    int wrd;
    int mrk;

    x = 0;
    wrd = 0;
    mrk = 1;
    while (str[x])
    {
        if (str[x] == c)
            mrk = 1;
        if (str[x] != c && mrk)
        {
            mrk = 0;
            wrd++;
        }
        x++;
    }
    return (wrd);
}

static int      ft_setstr(char const *str, char c, int *p)
{
    int x;

    x = 0;
    while (str[p[0]] == c)
        p[0]++;
    while (str[p[0]] != c && str[p[0]])
    {
        x++;
        p[0]++;
    }
    return (x + 1);
}

static char     **ft_settable(char const *s, char **arr, char c, int i)
{
    int x;
    int y;

    i = 0;
    x = 0;
    while (s[i])
    {
        y = 0;
        while (s[i] == c && s[i])
            i++;
        while (s[i] != c && s[i])
        {
            arr[x][y] = s[i];
            y++;
            i++;
        }
        if (y != 0)
            arr[x][y] = '\0';
        x++;
    }
    return (arr);
}

char            **ft_strsplit(char const *s, char c)
{
    int     x;
    int     p[1];
    char    **arr;

    x = ft_wrdcount(s, c);
    if (!(arr = (char**)malloc(sizeof(char*) * (x + 1))))
        return (NULL);
    arr[x] = NULL;

    x = -1;
    p[0] = 0;
    while (arr[++x])
        if (!(arr[x] = (char*)malloc(sizeof(char) * ft_setstr(s, c, p))))
            return (NULL);
    arr = ft_settable(s, arr, c, x);
    return (arr);
}
