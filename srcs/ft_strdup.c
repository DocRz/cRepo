/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:08:03 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 18:49:24 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int		c;
	char	*dup;

	c = 0;
	while (s1[c])
		c++;
	if (!(dup = (char*)malloc(sizeof(char) * (c + 1))))
	{
		errno = ENOMEM;
		return (NULL);
	}
	c = -1;
	while (s1[++c])
		dup[c] = s1[c];
	dup[c] = '\0';
	return (dup);
}
