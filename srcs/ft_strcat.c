/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:09:09 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:09:15 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *restrict s1, const char *restrict s2)
{
    int c;
    int len;

    c = 0;
    len = 0;
    while (s1[c])
        c++;
    while (s2[len])
    {
        s1[c] = s2[len];
        c++;
        len++;
    }
    s1[c] = '\0';
    return(s1);
}
