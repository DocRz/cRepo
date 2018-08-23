/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:29:45 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:35:13 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tracer;
	int		c;

	tracer = begin_list;
	c = 0;
	if (!begin_list)
		return (c);
	else
	{
		while (tracer)
		{
			tracer = tracer->next;
			c++;
		}
		return (c);
	}
}
