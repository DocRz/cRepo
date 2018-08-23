/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_lib.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 20:11:52 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/15 20:48:46 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STANDARD__LIB_
# define STANDARD__LIB_

# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);

int		ft_strlen(char *str);

int		ft_str_is_numeric(char *str);

int		ft_str_is_alpha(char *str);

#endif