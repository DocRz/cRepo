/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:57:05 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 18:57:30 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    tmp[n];
    size_t  len;

    len = -1;
    if (n > 0)
    {
        while (len < n)
            tmp[len] = 0;
        s = tmp;
    }
    else
        return ;
}
