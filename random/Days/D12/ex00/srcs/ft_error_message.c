/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:51:04 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/20 19:02:12 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		ft_error_message(int ac)
{
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
		return (0);
}
