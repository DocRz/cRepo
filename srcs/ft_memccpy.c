/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:07:11 by anrzepec          #+#    #+#             */
/*   Updated: 2018/10/08 16:37:22 by andrewrze        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t  len;
    char    *t_src;
    char    *t_dst;

    t_src = (char*)src;
    t_dst = dst;
    len = 0;
    while (len < n)
    {
        if (t_src[len] == c)
            return (dst + (len + 1));
        t_dst[len] = t_src[len];
        len++;
    }
    return (NULL);
}
