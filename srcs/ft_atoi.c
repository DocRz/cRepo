/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:43:20 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 18:24:20 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int	c;
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	c = 0;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\r' || str[c] == '\v'
			|| str[c] == '\f' || str[c] == 32)
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			neg = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = res * 10 + (str[c] - 48);
		c++;
	}
	res *= neg;
	return (res);
}
