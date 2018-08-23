/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:31:24 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:47:01 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)())
{
	t_list *tracer;

	tracer = begin_list;
	while (tracer)
	{
		if (!((*cmp)(tracer->data, data_ref)))
			(*f)(tracer->data);
		tracer = tracer->next;
	}
}
