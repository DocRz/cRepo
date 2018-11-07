/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:03:11 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/06 15:03:35 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_static_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_static_putchar_fd('-', fd);
		if (n == MIN_INT)
		{
			n = 147483648;
			ft_static_putchar_fd('2', fd);
		}
		else
			n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_static_putchar_fd(n % 10 + 48, fd);
}
