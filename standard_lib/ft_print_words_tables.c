/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 18:22:27 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/16 18:04:31 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int c;

	c = 0;
	while (tab[c] != NULL)
	{
		i = 0;
		while (tab[c][i] != '\0')
		{
			ft_putchar(tab[c][i]);
			i++;
		}
		ft_putchar('\n');
		c++;
	}
}
