/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:53:01 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/17 14:58:09 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	if(!(new_elem = (t_list*)malloc(sizeof(t_list))))
		return (new_elem = NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}