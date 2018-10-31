/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrewrzepecki <anrzepec@student.42.f      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:41:30 by andrewrze         #+#    #+#             */
/*   Updated: 2018/10/31 01:12:20 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    int c;

    c = -1;
    while (s[++c])
        write(fd, &s[c], 1);
    write(fd, "\n", 1);
}
