/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:02:14 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/06 15:03:04 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_static_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_static_putchar('-');
		if (n == MIN_INT)
		{
			n = 147483648;
			ft_static_putchar('2');
		}
		else
			n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_static_putchar(n % 10 + 48);
}
