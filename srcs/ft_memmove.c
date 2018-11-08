/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:34:19 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/08 19:17:50 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void const *src, size_t len)
{
	char	*t_dst;
	char	*t_src;
	char	tmp[len];
	size_t	c;

	t_dst = (char*)dst;
	t_src = (char*)src;
	c = 0;
	while (c < len)
	{
		tmp[c] = t_src[c];
		c++;
	}
	c = 0;
	while (c < len)
	{
		t_dst[c] = tmp[c];
		c++;
	}
	return (dst);
}
