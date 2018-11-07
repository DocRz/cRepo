/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:40:14 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/06 16:32:27 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_settrim(char const *s, int *ends)
{
	int		c;
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (ends[1] - ends[0] + 2))))
		return (NULL);
	c = 0;
	while (ends[0] <= ends[1])
	{
		str[c] = s[ends[0]];
		c++;
		ends[0]++;
	}
	str[c] = '\0';
	return (str);
}

static int		ft_isspace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	int		mrk[2];
	int		c;
	char	*str;

	c = 0;
	mrk[0] = 0;
	while (s[c])
	{
		if (ft_isspace(s[c]) && c == mrk[0])
			mrk[0]++;
		c++;
	}
	if (mrk[0] == c)
		return (str = NULL);
	c--;
	mrk[1] = c;
	while (c >= 0)
	{
		if (ft_isspace(s[c]) && c == mrk[1])
			mrk[1]--;
		c--;
	}
	return (str = ft_settrim(s, mrk));
}
