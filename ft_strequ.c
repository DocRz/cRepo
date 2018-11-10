/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:09:05 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/09 14:37:19 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t c;

	c = 0;
	if (s1 && s2)
	{
		while (s1[c] && s2[c])
		{
			if (s1[c] != s2[c])
				return (0);
			c++;
		}
		if (s1[c] == s2[c])
			return (1);
		else
			return (0);
	}
	return (0);
}
