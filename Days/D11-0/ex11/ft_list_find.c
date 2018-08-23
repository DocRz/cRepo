/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:02:23 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:47:15 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tracer;

	tracer = begin_list;
	while (tracer)
	{
		tracer = tracer->next;
		if (!(*cmp)(tracer->data, data_ref))
			return (tracer);
	}
	return (begin_list);
}
