/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:10:10 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:10:17 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strdup(const char *s1)
{
    int     c;
    char    *dup;

    c = 0;
    while (s1[c])
        c++;
    if (!(dup = (char*)malloc(sizeof(char) * c)))
    {
        errno = ENOMEM;
        return (NULL);
    }
    c = -1;
    while(s1[++c])
        dup[c] = s1[c];
    dup[c] = '\0';
    return (dup);
}
