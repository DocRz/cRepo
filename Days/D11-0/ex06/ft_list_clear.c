/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 22:41:58 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 19:33:02 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *free_elem;

	if (!(*begin_list))
		return ;
	while (*begin_list)
	{
		free_elem = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_elem);
	}
}
