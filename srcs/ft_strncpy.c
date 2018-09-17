/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:11:00 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:11:06 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t  c;

    c = 0;
    while (src[c] && c < len)
    {
        dst[c] = src[c];
        c++;
    }
    while (c < len)
    {
        dst[c] = '\0';
        c++;
    }
    return (dst);
}
