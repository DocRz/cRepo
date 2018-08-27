/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 20:18:48 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 18:44:23 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *tracer;

	tracer = begin_list;
	if (!tracer)
		return (tracer);
	while (tracer)
	{
		nbr--;
		tracer = tracer->next;
		if (!nbr)
			return (tracer);
	}
	return (tracer);
}
