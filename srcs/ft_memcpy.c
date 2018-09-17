/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:08:00 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:08:06 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  len;
    char    *t_src;
    char    *t_dst;

    t_src = (char*)src;
    t_dst = (char*)dst;
    len = 0;
    while (len < n)
    {
        t_dst[len] = t_src[len];
        len++;
    }
}
