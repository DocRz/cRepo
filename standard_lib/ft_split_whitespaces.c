/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:53:45 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/15 18:58:03 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_set_words(char *str, char **tab, int *ptr, int words)
{
	int c;
	int x;
	int y;

	c = 0;
	x = 0;
	while (str[c] != '\0')
	{
		y = 0;
		while (str[c] == '\r' || str[c] == ' ' || str[c] == '\t')
			c++;
		while (str[c] != '\r' && str[c] != ' ' && str[c] != '\t' && (str[c]))
		{
			tab[x][y] = str[c];
			c++;
			y++;
		}
		if (x < words)
			tab[x][ptr[x] - 1] = '\0';
		x++;
	}
}

void	ft_word_length(char *str, int *ptr, int words)
{
	int c;
	int x;

	x = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (x < words)
			ptr[x] = 0;
		while (str[c] == '\r' || str[c] == ' ' || str[c] == '\t')
			c++;
		while (str[c] != '\r' && str[c] != ' ' && str[c] != '\t' && (str[c]))
		{
			ptr[x] += 1;
			c++;
		}
		if (x < words)
			ptr[x] += 1;
		x++;
	}
}

int		ft_word_count(char *str)
{
	int c;
	int words;
	int a;

	a = 1;
	c = 0;
	words = 0;
	while (str[c] != '\0')
	{
		if (str[c] == '\r' || str[c] == ' ' || str[c] == '\t')
			a = 1;
		if (str[c] != '\r' && str[c] != ' ' && str[c] != '\t' && (a))
		{
			a = 0;
			words++;
		}
		c++;
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*nullpoint;
	int		*ptr;
	int		words;
	int		c;

	nullpoint = 0;
	if ((words = ft_word_count(str)))
	{
		if (!(tab = (char**)malloc(sizeof(char*) * (words + 1))))
			return (NULL);
		if (!(ptr = (int*)malloc(sizeof(int) * words)))
			return (NULL);
	}
	else
		return (tab = &nullpoint);
	ft_word_length(str, ptr, words);
	c = -1;
	while (++c < words)
		if (!(tab[c] = (char*)malloc(sizeof(char) * ptr[c])))
			return (NULL);
	tab[c] = nullpoint;
	ft_set_words(str, tab, ptr, words);
	return (tab);
}
