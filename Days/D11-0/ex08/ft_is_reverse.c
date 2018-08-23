/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 20:33:31 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:44:35 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *next;
	t_list *prev;
	t_list *tracer;

	prev = NULL;
	tracer = *begin_list;
	while (tracer)
	{
		next = tracer->next;
		tracer->next = prev;
		prev = tracer;
		tracer = next;
	}
	*begin_list = prev;
}
