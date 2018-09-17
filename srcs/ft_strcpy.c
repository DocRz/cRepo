/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:09:50 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:10:01 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char  *ft_strcpy(char *dst, const char *src)
{
    int c;

    c = -1;
    while (src[++c])
        dst[c] = src[c];
    dst[c] = '\0';
    return (dst);
}
