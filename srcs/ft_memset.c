/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:08:17 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:08:25 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t          t_len;
    unsigned char   tmp[len];

    t_len = -1;
    while (++t_len < len)
        tmp[t_len] = c + 48;
    b = tmp;
    return (b);
}
