/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:38:37 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/20 19:01:35 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	file_cont[BUFF_SIZE + 1];

	if (ft_error_message(ac))
		return (1);
	if ((fd = open(av[1], O_RDONLY)) == -1)
		if (ft_open_err())
			return (1);
	while ((ret = read(fd, file_cont, BUFF_SIZE)))
	{
		file_cont[ret] = '\0';
		ft_putstr(file_cont);
	}
	if (ret == -1)
		if (ft_read_err())
			return (1);
	ft_putstr("\n");
	if (close(fd) == -1)
		if (ft_close_err())
			return (1);
	return (0);
}
