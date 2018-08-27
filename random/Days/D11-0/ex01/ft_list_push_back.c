/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:23:31 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:40:08 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_elem;
	t_list	*tracer;

	tracer = *begin_list;
	last_elem = ft_create_elem(data);
	if (!tracer)
		*begin_list = last_elem;
	else
	{
		while (tracer->next)
			tracer = tracer->next;
		tracer->next = last_elem;
	}
}
