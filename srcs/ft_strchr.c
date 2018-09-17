/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <anrzepec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:09:24 by anrzepec          #+#    #+#             */
/*   Updated: 2018/09/17 19:09:34 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    unsigned int len;

    len = 0;
    while (str)
    {
        if (str[0] == c + 48)
            return ((char*)str);
        str++;
    }
    return (NULL);
}
