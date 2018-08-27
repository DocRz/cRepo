/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:11:48 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/20 18:58:42 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

int		ft_close_err(void)
{
	ft_putstr_err("close() error, stopping process..\n");
	return (1);
}
