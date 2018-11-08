/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:37:23 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/08 12:38:16 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		c;

	c = 0;
	while (s[c])
		c++;
	if (!(str = (char*)malloc(sizeof(char) * (c + 1))))
		return (NULL);
	c = 0;
	while (s[c])
		str[c] = (*f)(s[c]);
	return (str);
}
