/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:34:19 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/11 17:32:53 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, void const *src, size_t len)
{
	char	*t_dst;
	char	*t_src;

	t_dst = (char*)dst;
	t_src = (char*)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			t_dst[len - 1] = t_src[len - 1];
			len--;
		}
	}
	return (dst);
}
