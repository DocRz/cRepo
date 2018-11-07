/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:58:22 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 17:03:30 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char 	*str;
	int		c;

	c = 1;
	if (ac > 1)
	{
		while (c < ac)
		{
			ft_putendl("Looking for . from start:");
			str = ft_strchr(av[c], '.');
			if (str != NULL)
				ft_putendl(str);
			ft_putendl("Looking for 0 from end:");
			str = ft_strrchr(av[c], '.');
			if (str != NULL)
				ft_putendl(str);
			c++;
		}
	}
	return (0);
}