/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:44:17 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/20 19:03:27 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# define BUFF_SIZE 4096

int		ft_close_err(void);

int		ft_open_err(void);

int		ft_read_err(void);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putstr_err(char *str);

int		ft_error_message(int ac);

#endif
