/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:06:54 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/23 19:37:50 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tracer;
	t_list	*element;
	int		c;

	element = NULL;
	c = 0;
	if (ac == 0)
		return (NULL);
	while (c < ac)
	{
		tracer = element;
		element = ft_create_elem(av[c]);
		element->next = tracer;
		c++;
	}
	return (element);
}
