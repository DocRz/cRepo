/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:58:07 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 19:13:34 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tracer;

	tracer = begin_list;
	if (!tracer)
		return (NULL);
	else
	{
		while (tracer->next)
			tracer = tracer->next;
		return (tracer);
	}
}
