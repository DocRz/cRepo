/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:50:32 by anrzepec          #+#    #+#             */
/*   Updated: 2018/11/07 20:10:47 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	len;
	char	*t_src;
	char	*t_dst;

	t_src = (char*)src;
	t_dst = (char*)dst;
	len = 0;
	while (len < n)
	{
		if (t_src[len] == (unsigned char)c)
			return (dst + (len + 1));
		t_dst[len] = t_src[len];
		len++;
	}
	return (NULL);
}
