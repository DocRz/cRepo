/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:49:50 by andrewrze         #+#    #+#             */
/*   Updated: 2018/10/31 21:33:11 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
{
    int c;
    char **s;

    c = -1;
    ft_putendl(ft_itoa(-43431995));
    ft_putendl(ft_itoa(19434395));   
    ft_putendl_fd(ft_itoa(MAX_INT), 2);
    ft_putendl_fd(ft_itoa(MIN_INT), 1);

    ft_putstr("Split str: \n");
    s = ft_strsplit("*********andrew*bonjour****rzepecki*", '*');
    while (s[++c] != NULL)
        ft_putendl(s[c]);
    return (0);
}
