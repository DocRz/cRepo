/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:52:03 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 19:59:33 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	len;
	char	*t_src;
	char	*t_dst;

	t_src = (char*)src;
	t_dst = dst;
	len = 0;
	while (len < n)
	{
		t_dst[len] = t_src[len];
		len++;
	}
	return (dst);
}
