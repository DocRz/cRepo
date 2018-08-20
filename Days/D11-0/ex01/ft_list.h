/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:45:45 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/17 13:52:27 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# ifndef

t_list	*ft_create_elem(void *data);

typedef struct	s_list
{
	struct s_list *next;
	void *data;
} 				t_list;

#endif