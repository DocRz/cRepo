/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:49:50 by andrewrze         #+#    #+#             */
/*   Updated: 2018/11/03 17:48:18 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(int ac, char **av)
{
    int x;
    int c;
    char **s;
    char *str;

    c = 0;
    while (++c < ac)
    {
        str = ft_strtrim(av[c]);
        ft_putendl(str);
        ft_putendl("After trim");
        s = ft_strsplit(str, ' ');
        x = -1;
        while (s[++x] != NULL)
            ft_putendl(s[x]);
        free(s);
        free(str);
        ft_putstr("\n");
    }
    return (0);
}
