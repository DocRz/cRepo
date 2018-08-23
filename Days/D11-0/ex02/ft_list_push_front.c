/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 10:57:46 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 19:36:06 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *element;

	element = ft_create_elem(data);
	if (*begin_list == NULL)
		(*begin_list) = element;
	else
	{
		element->next = *begin_list;
		*begin_list = element;
	}
}
